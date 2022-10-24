#include <bits/stdc++.h>
using namespace std;
int searchRotated(vector<int> &arr, int n, int target)
{
    int start = 0, end = n - 1;

    while (start < end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
            return mid;

        // check if left half is sorted
        if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // check if right half sorted
        else
        {
            if (arr[mid] <= target && arr[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2};
    int n = arr.size();
    int target = 4;
    cout << "The Peak element in the array is: " << searchRotated(arr, n, target) << endl;
    return 0;
}
