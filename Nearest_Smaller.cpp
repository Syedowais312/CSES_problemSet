#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> x(n);
	stack<int> s;
     vector<int> ans(n);
	for(int i=0;i<n;i++)cin>>x[i];

		for(int i=0;i<n;i++){
			while(!s.empty()&&x[s.top()]>=x[i])s.pop();
			if(s.empty())ans.push_back(0);
			else ans[i]=s.top()+1;
			s.push(i);
		}
		for(int i=0;i<n;i++)cout<<ans[i]<<" ";
		cout<<endl;
		return 0;
}