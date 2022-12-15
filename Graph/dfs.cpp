#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], vector<int> &ls, int vis[])
{
    vis[node] = 1;

    ls.push_back(node);

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, ls, vis);
        }
    }
}
vector<int> dfsofGraph(vector<int> adj[], int V)
{
    int vis[V] = {0};
    int start = 0;
    vector<int> ls;

    dfs(start, adj, ls, vis);
    return ls;
}
int main()
{

    int n, m;
    cout << "Enter the number of nodes and edges" << endl;
    cin >> n >> m;

    vector<int> adj[n];
    cout << "Enter the edges" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> res = dfsofGraph(adj, m);
    cout << "The dfs of the graph" << endl;
    for (int i = 0; i < m; i++)
    {

        cout << res[i] << " ";
    }
    return 0;
}
