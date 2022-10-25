#include <bits/stdc++.h>
using namespace std;
int squareroot(int x)
{
    int low = 0;
    int high = x;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid * mid) == x)
            return mid;
        else if ((mid * mid) > x)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    cout << squareroot(x) << endl;
    return 0;
}
