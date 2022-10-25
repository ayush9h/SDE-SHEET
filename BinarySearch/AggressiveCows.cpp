#include <bits/stdc++.h>
using namespace std;
bool canplaceCows(int arr[], int n, int cows, int num)
{
    int co_ord = arr[0];
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - co_ord >= num)
        {
            co_ord = arr[i];
            cnt++;
        }
    }
    if (cnt == cows)
        return true;
    else
        return false;
}
void aggressiveCows(int arr[], int n, int cows)
{
    int low = 1;
    int high = arr[n - 1] - arr[0];
    // int res = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canplaceCows(arr, n, cows, mid))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << high << endl;
}
int main()
{
    int cows = 3;
    int n = 5;
    int arr[5] = {1, 2, 8, 4, 9};
    sort(arr, arr + n);
    aggressiveCows(arr, n, cows);
    return 0;
}
