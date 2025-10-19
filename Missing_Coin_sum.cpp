#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	sort(A.begin(),A.end());
     int res=1;
     for(int i=0;i<n;i++){
     	if(A[i]<=res){
     		res+=A[i];
     	}
     	else break;
     }	

     cout<<res<<endl;
	return 0;
}