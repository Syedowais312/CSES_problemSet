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
	long long median=A[n/2];
	long long totalSum=0;
	for(int i=0;i<n;i++){
		totalSum+=abs(median-A[i]);
	}
	cout<<totalSum<<endl;
	return 0;
}