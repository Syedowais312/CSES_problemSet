#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;


int solve(vector<string> &grid,int i,int j,vector<vector<long long>>& dp){
 int n=grid.size();
 int m=grid[0].size();
	if(i>=n||j>=m|| grid[i][j]=='*')return 0;
    
     if(i==n-1&&j==m-1)return 1;
      if(dp[i][j]!=-1) return dp[i][j];
	long long move_right=solve(grid,i,j+1,dp);
	long long move_down=solve(grid,i+1,j,dp);

    return dp[i][j]=(move_right+move_down)%MOD;
}

int main(){
	long long n;
	cin>>n;
	vector<string> grid(n);
	for(int i=0;i<n;i++)cin>>grid[i];

	
	 int m=grid[0].size();
	vector<vector<long long>> dp(n,vector<long long>(m,-1));

		cout<<solve(grid,0,0,dp)<<endl;

	return 0;
}