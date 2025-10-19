#include<bits/stdc++.h>
using namespace std;
// int solve(vector<int> &price, vector<int> &pages,int i,int x,vector<vector<int>> &dp){
//    if(i==price.size()) return 0;
// 	if(x<0) return INT_MIN;
// 	if(dp[i][x]!=INT_MIN)return dp[i][x]; 
// 	int notake=solve(price,pages,i+1,x,dp);
// 	int take=INT_MIN;
// 	if(x-price[i]>=0){
// 		take=pages[i]+solve(price,pages,i+1,x-price[i],dp);
	
// 	}
// 	return dp[i][x]=max(take,notake);
// }
int main(){
	int n,x;
	cin>>n>>x;
	vector<int> price(n);
	vector<int> pages(n);
	// vector<vector<int>> dp(n+1,vector<int>(x+1,INT_MIN));
   
	for(int i=0;i<n;i++)cin>>price[i];
	 for(int i=0;i<n;i++)cin>>pages[i];

	// 	cout<<solve(price,pages,0,x,dp)<<endl;
	vector<int> dp(x+1,0);
	for(int i=0;i<n;i++)
{
	for(int j=x;j>=price[i];j--){
		dp[j]=max(dp[j],dp[j-price[i]]+pages[i]);
	}
}	

   cout<<dp[x]<<endl;
 return 0;

}