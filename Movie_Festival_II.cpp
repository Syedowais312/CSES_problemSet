#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
vector<pair<long long ,long long>> range;
for(int i=0;i<n;i++){
	long long arrive, depart;
	cin>>arrive>>depart;
	range.push_back({arrive,depart});
}

sort(range.begin(),range.end(),[](auto &a,auto &b){return a.second<b.second;});
int ans=0;
multiset<long long> avail;
for(int i=0;i<k;i++)avail.insert(0);

	for(auto &[start,end]:range){
		auto it=avail.upper_bound(start);
		if(it==avail.begin())continue;
		--it;
		avail.erase(it);
		avail.insert(end);
		ans++;
	}

	cout<<ans<<endl;
	return 0;

}