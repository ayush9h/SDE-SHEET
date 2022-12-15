#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int> adj[], int V)
{
    int vis[V] = {0};
    vis[0] = 1;

    queue<int> q;
    vector<int> bfs;
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
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

    vector<int> res = bfs(adj, m);

    for (int i = 0; i < m; i++)
    {
        cout << "The bfs of the graph" << endl;
        cout << res[i] << " ";
    }
    return 0;
}
