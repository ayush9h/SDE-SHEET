#include <bits/stdc++.h>
using namespace std;
static int inf = 1e9;

int main()
{
    vector<vector<int>> matrix{
        {0, 5, inf, 10},
        {inf, 0, 3, inf},
        {inf, inf, 0, 1},
        {inf, inf, inf, 0}};
    int n = matrix.size();

    vector<vector<int>> dist = matrix;

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == inf)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
