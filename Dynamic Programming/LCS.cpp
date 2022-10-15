#include <bits/stdc++.h>
using namespace std;
int solve(int ind1, int ind2, string &s, string &t, vector<vector<int>> &dp)
{
    // base case
    if (ind1 < 0 || ind2 < 0)
        return 0;
    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];

    // if found
    if (s[ind1] == t[ind2])
        return dp[ind1][ind2] = 1 + solve(ind1 - 1, ind2 - 1, s, t, dp);

    // if not found
    return dp[ind1][ind2] = max(solve(ind1 - 1, ind2, s, t, dp), solve(ind1, ind2 - 1, s, t, dp));
}
int getLengthOfLCS(string &str1, string &str2)
{
    int len1 = str1.size();
    int len2 = str2.size();
    vector<vector<int>> dp(len1, vector<int>(len2, -1));
    return solve(len1 - 1, len2 - 1, str1, str2, dp);
}
int main()
{
    string s1 = "abc";
    string s2 = "cadb";

    cout << getLengthOfLCS(s1, s2);
    return 0;
}
