#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2, 2, 3, 3, 3, 3, 4};
    int target = 3;
    int i = 0, j = nums.size()-1;
    int ans = 0;
    while (i != j)
    {
        if (nums[i] != target)
            i++;
        if (nums[j] != target)
            j--;
            
        if(nums[i]==target && nums[j]==target)
        break;
    }
    ans = j-i+1;
    cout << "The number of target in array is: " << ans << endl;
    return 0;
}
