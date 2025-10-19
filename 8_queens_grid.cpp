#include<bits/stdc++.h>
using namespace std;
void solve(vector<string> &grid,int row,int &ans){
   if(row==8){
    ans++;
    return;
   }

   for(int col=0;col<8;col++){
    if(grid[row][col]=='.'){
         bool attack=false;
         //upper part checking
     for(int i=0;i<row;i++){
        if(grid[i][col]=='Q'){
            attack=true;
            break;
        }
     }

     //left diagonal check
    for(int r=row-1, c=col-1;r>=0&&c>=0;r--,c--){
        if(grid[r][c]=='Q'){
            attack=true;
            break;
        }
    }
    
     for(int r=row-1,c=col+1;r>=0&&c<8;r--,c++){
        if(grid[r][c]=='Q'){
            attack=true;
            break;
        }
    }
    if(!attack){
        grid[row][col]='Q';
        solve(grid,row+1,ans);
        grid[row][col]='.';
    }

    }
    

   }
}
int main(){
   vector<string> grid(8);
   for(int i=0;i<8;i++)cin>>grid[i];
   int ans=0;
    solve(grid,0,ans);
    cout<<ans<<endl;

    return 0;
}