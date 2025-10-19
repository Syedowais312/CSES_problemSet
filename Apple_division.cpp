#include<bits/stdc++.h>
using namespace std;
int solve(vector<long long>&wieght,int i,long long diff,long long &ans){
    if(i==wieght.size()){
         ans=min(ans,abs(diff));
         return ans;
    }

    solve(wieght,i+1,diff+wieght[i],ans);
         solve(wieght,i+1,diff-wieght[i],ans);
         return ans;

}
int main()
{
    int n;
    cin>>n;
    long long ans=LLONG_MAX;
    vector<long long> wieght(n);
    for(int i=0;i<n;i++)cin>>wieght[i];
    cout<<solve(wieght,0,0,ans)<<endl;;
    
    return 0;
}