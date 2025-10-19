#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
	long long n,x;
	cin>>n>>x;
	vector<long long> coins(n);
	for(int i=0;i<n;i++)cin>>coins[i];

		vector<long long> dp(x+1,0);
  dp[0]=1;
  for(int c:coins){
	for(int i=c;i<=x;i++){
			
            dp[i]=(dp[i]+dp[i-c])%MOD;
            
		}
	}
	cout<<dp[x]%MOD<<endl;
	return 0;
}