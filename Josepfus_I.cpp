#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int k;
	cin>>n;
	cin>>k;
	set<int> s;
	int ind=0;
	vector<int> res;
	for(int i=1;i<=n;i++)s.insert(i);

		while(!s.empty()){
			ind=(ind+k)%s.size();
			auto it=s.find_by_order(ind);
            res.push_back(*it);
           s.erase(*it);
		}
for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
	cout<<endl;
		
	return 0;
}
