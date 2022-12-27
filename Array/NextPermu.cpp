#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    if(n == 1)return permutation;
    
    int prev = permutation[n-1];
    int j = n-1;
    while(j>=0 && permutation[j]>=prev){
        prev = permutation[j];
        --j;
    }
    if(j < 0){
        sort(permutation.begin(), permutation.end());
        return permutation;
    }
    
    sort(permutation.begin() + j + 1, permutation.end());
    int f = upper_bound(begin(permutation)+ j + 1, permutation.end(), permutation[j]) - begin(permutation);
    swap(permutation[f], permutation[j]);
    return permutation;
}
