#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	vector<long long> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
	map<long long,long long> seen;
     long long left=0;
     long long ans=0;
     for(int right=0;right<n;right++){
     	seen[A[right]]++;
     	while(seen.size()>k){
     		seen[A[left]]--;
            if(seen[A[left]]==0)seen.erase(A[left]);
            left++;
     	}
     	ans+=right-left+1;
     }
	 cout<<ans<<endl;
	 return 0;
}