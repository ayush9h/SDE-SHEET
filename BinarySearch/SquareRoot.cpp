#include <bits/stdc++.h> 

int sqrtN(long long int N)
{
    if(N < 2) return N;
   long long int s = 0, e = N;
   long long int mid = s + (e - s) / 2;
   long long ans = -1;
   while (s <= e)
   {
       if (mid  == (N/mid)) // same as mid*mid == N, to avoid range overlow
           return mid;
       else if (mid > (N/mid))
           e = mid - 1;
       else
       {
           ans = mid;
           s = mid + 1;
       }
       mid = s + (e - s) / 2;
   }
   return ans;
}
