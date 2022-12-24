#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n < 2)
        return 1;
    else
    {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;

    int ans = climbStairs(n);
    cout << ans << endl;
    return 0;
}
