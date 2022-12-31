pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	 pair<int,int>ans;
    int p1=-1,p2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           if(p2==0){
               p1=i;
           }
            p2++;
        }
    }
    if(p1>=0 && p2>=0){
    ans.first=p1;
    ans.second=p1+p2-1;
    return ans;}
    else
        ans.first=-1;
        ans.second=-1;
    return ans;
}
