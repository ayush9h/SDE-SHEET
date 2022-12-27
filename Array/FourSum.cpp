#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
       sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++){
        int num1 = arr[i];
        for(int j=i+1;j<n-2;j++){
            int num2 = arr[j];
            int k = j+1;
            int l = n-1;
            while(k<l){
                if(num1+num2+arr[k]+arr[l]==target){
                    return "Yes";
                }else if(num1+num2+arr[k]+arr[l]<target){
                    k++;
                }else{
                    l--;
                }
            }
            
        }
    }
    return "No";
}
