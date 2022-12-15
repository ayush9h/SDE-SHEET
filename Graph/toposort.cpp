#include <bits/stdc++.h>
using namespace std;
void dfs(int node, int vis[], stack<int> &st, vector<int> adj[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, st, adj);
        }
    }
    st.push(node);
}
vector<int> topoSort(vector<int> adj[], int V)
{
    int vis[V] = {0};

    stack<int> st;
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, st, adj);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
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

    vector<int> ans = topoSort(adj, m);

    for (int i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
