#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	queue<pair<int,int>> q;
	vector<vector<int>> board(n,vector<int>(n,-1));
	board[0][0]=0;
	q.push({0,0});
	vector<pair<int,int>> moves={{2,1},{2,-1},{-2,1},{-2,-1},
                        {1,2},{1,-2},{-1,2},{-1,-2}};
	while(!q.empty()){
		int i=q.front().first;
		int j=q.front().second;
		q.pop();
		for(int ind=0;ind<moves.size();ind++){
			int x=i+moves[ind].first;
			int y=j+moves[ind].second;
			if(x>=0&&y>=0 &&x<n&&y<n &&board[x][y]==-1){
				board[x][y]=board[i][j]+1;
				q.push({x,y});
			}
		}


	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	
  return 0;
}
