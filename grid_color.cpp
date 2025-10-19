#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<string> s(n);
	for(string &row:s)cin>>row;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				set<char> se;
			   if(i!=0)se.insert(s[i-1][j]);
			   if(j!=0)se.insert(s[i][j-1]);
			   for(char x='A';x<='D';x++){
			   	if(!se.count(x)&&s[i][j]!=x){
			   		s[i][j]=x;
			   		
			   		break;
			   	}
			   }
			   
			}
			 cout<<s[i]<<endl;

		}
		return 0;
}