#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	const int MOD=1e9+7;
	cin>>n;
	 vector<long long> dp(n+1);
	 //initialize the base condition
	 dp[0]=1;
	 //loop till n
	 for(int i=1;i<=n;i++){
	 	long long ways=0;
	 	//loop for 6 faces 
	 	for(int face=1;face<=6;face++){
	 		//if i-face is grater than zero then the ways can be increased
	 		//i.e if i=1 and face=1 i-face=0 and dp[0] id already present in the dp
	 		//we can make the number i with extra ways of dp[i-face]
	 		if(i-face>=0)ways+=dp[i-face];
	 	}
	 	dp[i]=ways%MOD;
	 }
	 cout<<dp[n]<<endl;
	 return 0;
}

//simple dp problem
//we go from 1 till n(the number of ways of this number)
//and loop from 1-6 the faces of coin
