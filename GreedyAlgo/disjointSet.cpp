#include<bits/stdc++.h>
using namespace std;
class DisSet
{
public:
    int parent[200];
    int rank[200];
    void make_set(vector<int> &sets)
    {
        int n = sets.size();
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int FindPar(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = FindPar(parent[node]);
    }

    void Union(int u, int v)
    {
        u = FindPar(u);
        v = FindPar(v);

        if (rank[u] < rank[v])
        {
            parent[u] = v;
        }
        else if (rank[u] > rank[v])
        {
            parent[v] = u;
        }
        else if (rank[u] == rank[v])
        {
            parent[u] = v;
            v++;
        }
    }
};
int main()
{
    vector<int> sets = {6, 7, 1, 2, 3};
    DisSet dis;

    dis.make_set(sets);

    dis.Union(2, 6);
    return 0;
}
