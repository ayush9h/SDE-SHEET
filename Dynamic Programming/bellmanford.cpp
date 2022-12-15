#include <bits/stdc++.h>
using namespace std;
vector<int> bellman_ford(int V, vector<vector<int>> &edges, int s)
{
    vector<int> dist(V, 1e8);
    dist[s] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];

            if (dist[u] != 1e8 && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }
    // nth relation for negative cycle

    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int w = it[2];

        if (dist[u] != 1e8 && dist[u] + w < dist[v])
        {
            return {-1};
        }
    }
    return dist;
}
int main()
{

    // driver code
    return 0;
}
