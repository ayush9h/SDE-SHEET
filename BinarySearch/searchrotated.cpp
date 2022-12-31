
/*Naive Approach*/
int findPosition(vector<int>& arr, int n, int k)
{
    //naive approach
   for(int i=0;i<n;i++)
   {
       if(arr[i] == k)
           return i;
   }
   return -1;
}

/*Better Approach*/
#include <bits/stdc++.h> 
int findPosition(vector<int>& arr, int n, int k)
{
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high)
    {
        int mid = (low+high) >> 1;
        if(arr[mid]==k)
            return mid;
        //check if left half is sorted
        if(arr[low] <= arr[mid])
        {
            if(k>=arr[low] && k<=arr[mid])
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        //right half is sorted
        else{
            if(k>=arr[mid] && k <= arr[high])
            {
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
