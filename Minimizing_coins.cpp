#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,x;
	cin>>n>>x;
	vector<long long> coins(n);
	//example for consideration
	//3 11
	//1 5 7
	for(int i=0;i<n;i++)cin>>coins[i];
       //initialize the dp for storing all the possible sums from 1 to x(min  coins required for this sums)

		vector<long long> dp(x+1,INT_MAX);
	//by default for making sum=0, 0 steps are required
	dp[0]=0;
	//loop from 1 to x
       for(int i=1;i<=x;i++){
       	//for every i check the min possible coins required
       	for(int c:coins){
       		if(i-c>=0){
       			dp[i]=min(dp[i],dp[i-c]+1);
       			//ex:= dp[2]=2 because from our example 1+1
       			//ex:= dp[5]=1 because from our example 5
       		   //ex:= dp[6]=2 because from our example 5+1
	
       		}
       	}
       }
       if(dp[x]==INT_MAX)cout<<-1;
        //the final result if the we where able to build the dp for the given x
       else cout<<dp[x];

       return 0;
}