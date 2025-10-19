#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	multiset<long long> tops;
	for(int i=0;i<n;++i){
		long long x;
		cin>>x;
		auto it=tops.upper_bound(x);
		if(it==tops.end()){
			tops.insert(x);
		}
		else{
			tops.erase(it);
			tops.insert(x);
		}
	}
	cout<<tops.size()<<endl;
	return 0;
}


