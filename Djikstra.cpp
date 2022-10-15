#include <bits/stdc++.h>
using namespace std;
void djikstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    // create the adjacency list
    unordered_map<int, list<pair<int, int>>> adj;

    for (int i = 0; i < edges; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> dist(vertices);

    for (int i = 0; i < vertices; i++)
    {
        dist[i] = INT_MAX;
    }

    set<pair<int, int>> st;

    dist[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty())
    {
        auto top = *(st.begin());
        int NodeDistance = top.first;
        int TopNode = top.second;

        st.erase(st.begin());

        for (auto neighbour : adj[TopNode])
        {
            // cout << neighbour.first << endl;
            if (NodeDistance + neighbour.second < dist[neighbour.first])
            {
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
                if (record != st.end())
                {
                    st.erase(record);
                }

                dist[neighbour.first] = (NodeDistance + neighbour.second);
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
        }
    }
    for (int i = 0; i < vertices; i++)
    {
        cout << dist[i] << " ";
    }
}
int main()
{
    int vertices, edges;
    cin >> vertices >> edges;

    int source = 0;

    vector<vector<int>> vec{{0, 1, 5}, {0, 2, 8}, {1, 2, 9}, {1, 3, 2}, {2, 3, 6}};

    djikstra(vec, vertices, edges, source);

    return 0;
}