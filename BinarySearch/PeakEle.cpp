#include <bits/stdc++.h>
using namespace std;
int peakEle(vector<int> &arr, int n)
{
    int start = 0, end = n - 1;

    while (start < end)
    {
        int mid = (start + end) / 2;

        if (mid == 0)
            return arr[0] >= arr[1] ? arr[0] : arr[1];

        if (mid == n - 1)
            return arr[n - 1] >= arr[n - 2] ? arr[n - 1] : arr[n - 2];

        if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
            return arr[mid];
        if (arr[mid] < arr[mid - 1])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return arr[start];
}
int main()
{
    vector<int> arr = {3, 5, 4, 1, 1};
    int n = arr.size();
    cout << "The Peak element in the array is: " << peakEle(arr, n) << endl;
    return 0;
}
