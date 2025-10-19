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
	}

	long long sum=0;	
	sort(A.begin(),A.end());
	for(int i=0;i<n;i++){
		int j=i+1;
		int k=n-1;
		while(j<k){
			sum=A[i].first+A[j].first+A[k].first;
			if(sum==x){
				cout<<A[i].second<<" "<<A[j].second<<" "<<A[k].second<<endl;
				return 0;
			}
			else if(sum<x){
				j++;
			}
			else{
				k--;
			}
		}
	}
	cout<<"IMPOSSIBLE\n";
	return 0;
}