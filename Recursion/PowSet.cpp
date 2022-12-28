#include <bits/stdc++.h> 
vector<vector<int>> helper(vector<int>&v,int i)
{
    if(i>=v.size())return {{}};
   vector<vector<int>> partialAns =  helper(v,i+1);
   vector<vector<int>> FinalAns;
    //without ith element
    for(vector<int> x : partialAns)
    {
       FinalAns.push_back(x);
    }
    for(vector<int>x:partialAns)
    {
        x.push_back(v[i]);
        FinalAns.push_back(x);
    }
    
    return FinalAns;
}
vector<vector<int>> pwset(vector<int>v)
{
    return helper(v,0);
}
