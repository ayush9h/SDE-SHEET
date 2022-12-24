#include <bits/stdc++.h> 
int solve(int ind,vector<int>&nums,vector<int>&dp)
{
    if(ind==0)
        return 0;
    
    int pick = nums[ind] + solve(ind-2,nums,dp);
    int notPick = 0 + solve(ind-1,nums,dp);
    
    
    return max(pick,notPick)
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return solve(n-1,nums,dp);
}
//Driver Code starts here
