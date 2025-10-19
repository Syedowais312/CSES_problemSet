#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<long long> song(n);
	for(int i=0;i<n;i++)cin>>song[i];
	int l=0;
	int ans=0;
	// unordered_set<long long> seen;
map<long long,long long> last_ind; 
	for(int r=0;r<n;r++){
		// while(seen.count(song[r])){
		// 	seen.erase(song[l]);
		// 	l++;
		// }
		// seen.insert(song[r]);
		if(last_ind.count(song[r])&&last_ind[song[r]]>=l){
			l=last_ind[song[r]]+1;
		}
		last_ind[song[r]]=r;
		ans=max(ans,r-l+1);
	}
	cout<<ans<<endl;
	return 0;
}