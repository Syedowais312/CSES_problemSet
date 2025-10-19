#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	vector<long long> A(n+1);
		vector<long long> prefix(n+1,0);

	for(int i=1;i<=n;i++){
		cin>>A[i];
		prefix[i]=prefix[i-1]+A[i];
	}
		
	deque<int> pq;
	long long ans=LLONG_MIN;
	for(int i=a;i<=n;i++){
		int new_ind=i-a;
		while(!pq.empty()&&prefix[pq.back()]>=prefix[new_ind])pq.pop_back();
		pq.push_back(new_ind);

		while(!pq.empty()&&pq.front()<i-b)pq.pop_front();

		ans=max(ans,prefix[i]-prefix[pq.front()]);
	}

	cout<<ans<<endl;
	return 0;
}