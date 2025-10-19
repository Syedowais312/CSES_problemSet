#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
cin>>n>>x;
vector<pair<int,int>> A;
for(int i=0;i<n;i++){
     int ele;
     cin>>ele;
     A.push_back({ele,i+1});
};

sort(A.begin(),A.end());

int i=0;
int j=n-1;
while(i<j){
	if(A[i].first+A[j].first<x){
		i++;
	}
	else if(A[i].first+A[j].first>x){
		j--;
	}
	else{
		cout<<A[i].second<<" "<<A[j].second<<endl;
		return 0;
	}
}

cout<<"IMPOSSIBLE"<<endl;
return 0;
}
