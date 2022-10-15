#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &height, vector<int> &dp)
{
    if (ind == 0)
        return 0;

    if (dp[ind] != -1)
        return dp[ind];
    int left = solve(ind - 1, height, dp) + abs(height[ind] - height[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
    {
        right = solve(ind - 2, height, dp) + abs(height[ind] - height[ind - 2]);
    }
    return min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n + 1, -1);
    return solve(n - 1, heights, dp);
}
int main()
{
    int n = 8;
    vector<int> heights = {7, 4, 4, 2, 6, 6, 3, 4};
    frogJump(n, heights);
    return 0;
}
