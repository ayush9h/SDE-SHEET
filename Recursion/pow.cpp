#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    long long ans;
    if(N==0)
        return 1;//base case
    ans = Pow(X,N-1);
    return X*ans;
}
