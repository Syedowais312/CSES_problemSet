#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n));
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
             set<int>s;
             for(int r=0;r<row;r++){
                s.insert(grid[r][col]);
             }
             for(int c=0;c<col;c++){
                s.insert(grid[row][c]);
             }
             int x=0;
             while(s.count(x)){
                x++;
             }
             grid[row][col]=x;
             cout<<grid[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}