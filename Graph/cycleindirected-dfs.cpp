#include <bits/stdc++.h>
using namespace std;
bool dfsCheck(int node, vector<int> adj[], int vis[], int pathVis[])
{
    vis[node] = 1;
    pathVis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfsCheck(it, adj, vis, pathVis) == true)
                return true;
        }
        else if (pathVis[it])
        {
            return true;
        }
    }
    pathVis[node] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    int vis[V] = {0};
    int pathVis[V] = {0};

    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (dfsCheck(i, adj, vis, pathVis) == true)
                return true;
        }
    }
    return false;
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

    bool res = isCyclic(m, adj);

    if (res == false)
    {
        cout << "Cycle not found" << endl;
    }
    else
    {
        cout << "Cycle found in the graph" << endl;
    }
    return 0;
}
