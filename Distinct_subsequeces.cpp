#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
	int n;
	cin>>n;
	vector<int> A(n);
	unordered_map<long long,int> freq;
	for(int i=0;i<n;i++){
		cin>>A[i];
		freq[A[i]]++;
	}

	long long result=1;
	for(auto &[val,f]:freq){
		result=(result*(f+1))%MOD;
	}
	result=(result-1+MOD)%MOD;
	cout<<result<<endl;
	return 0;
}