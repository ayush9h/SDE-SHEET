#include <bits/stdc++.h> 
int findPeak(vector<int> &arr) {
  int n = arr.size();
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            return arr[i];
    }
    return arr[arr.size()-1];
}
