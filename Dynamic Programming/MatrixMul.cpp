#include <bits/stdc++.h>
using namespace std;
int solve(int i, int j, vector<int> &arr, vector<vector<int>> dp)
{
    if (i == j) // base case due to shrinking
        return 0;

    if (dp[i][j] != -1) // check if visited or not
        return dp[i][j];

    int steps = 0;
    int mini = 1e9;
    for (int k = i; k < j; k++)
    {
        steps = arr[i - 1] * arr[k] * arr[j] + solve(i, k, arr, dp) + solve(k + 1, j, arr, dp);
        if (steps < mini)
            mini = steps;
    }
    return dp[i][j] = mini; // storing the state
}
int MatrixMul(vector<int> &arr, int n, vector<vector<int>> dp)
{
    return solve(1, n - 1, arr, dp);
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50};
    int n = 5;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    cout << MatrixMul(arr, n, dp) << " ";
    return 0;
}
