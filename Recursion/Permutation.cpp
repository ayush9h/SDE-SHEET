#include<bits/stdc++.h>
void solve(string str,int index,vector<string>&ans )
{
    if(index>=str.size())
    {
        ans.push_back(str);
        return;
    }
    for(int j=index;j<str.size();j++)
    {
        swap(str[index],str[j]);
         solve(str,index+1,ans);
    }
}
vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    int index=0;
    solve(str,index,ans);
     sort(ans.begin(), ans.end());
    return ans;
}
