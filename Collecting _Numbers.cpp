#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> A(n+1),pos(n+1);
	//make an array for storing the elements and positions of the elements
	for(int i=1;i<=n;i++){
		cin>>A[i];
		pos[A[i]]=i;
	}

	auto count_pairs=[&](int a,int b){
		if(a<1||b>n||b<1||a>n)return 0;
		return pos[a]>pos[b]?1:0;
	};
  long long round=1;
for(int i=1;i<n;i++){
	round+=count_pairs(i,i+1);
}

while(m--){
	int a,b;
	cin>>a>>b;
	int x=A[a];
	int y=A[b];

	set<pair<int,int>> pairs;
for(int v : {x, y, x-1, x+1, y-1, y+1}) {
    if(v >= 1 && v < n) pairs.insert({v, v+1});
}

	for(auto &[u,v]:pairs){
		round-=count_pairs(u,v);
	}
	swap(A[a],A[b]);
	swap(pos[x],pos[y]);
for(auto &[u,v]:pairs){
		round+=count_pairs(u,v);
	}

cout<<round<<endl;
}


	return 0;
}
