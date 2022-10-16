//See the disjoint set file before this
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int u;
    int v;
    int w;
    node(int first, int second, int weight)
    {
        u = first;
        v = second;
        w = weight;
    }
};
bool comp(node a, node b)
{
    return a.w < b.w;
}

int FindPar(int u, vector<int> &parent)
{
    if (parent[u] == u)
        return u;
    return parent[u] = FindPar(parent[u], parent);
}

void Union(int u, int v, vector<int> &parent, vector<int> &rank)
{
    if (rank[u] == rank[v])
    {
        parent[u] = v;
        rank[v]++;
    }
    else if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else
    {
        parent[v] = u;
    }
}
int main()
{
    int n, m; // vertices and edges
    cin >> n >> m;
    vector<node> edges; // creating a vector of node type

    for (int i = 0; i < m; i++)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        edges.push_back(node(u, v, weight));
    }

    sort(edges.begin(), edges.end(), comp);

    // Implementing the disjoint set data structure

    vector<int> parent(n);
    vector<int> rank(n);
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }

    int cost = 0;               // mst cost
    vector<pair<int, int>> mst; // stores the edges of the mst

    for (auto it : edges)
    {
        if (FindPar(it.u, parent) != FindPar(it.v, parent))
        {
            cost = it.w;
            mst.push_back({it.u, it.v});
            Union(it.u, it.w, parent, rank);
        }
    }
    cout << cost << endl;
    for (auto it : mst)
    {
        cout << it.first << "->" << it.second << endl;
    }
  return 0;
}
