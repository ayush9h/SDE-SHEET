#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 4, 13, 13, 13, 20, 40};
    int target = 13;
    int i = 0, pos = -1;
    while (i != nums.size())
    {
        if (nums[i] == target)
        {
            pos = max(i, pos);
            i++;
        }
        else if (nums[i] != target)
        {
            i++;
        }
    }
    cout << "The position of the last occurrence is: " << pos << endl;
    return 0;
}
