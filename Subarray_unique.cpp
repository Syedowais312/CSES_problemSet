#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)cin>>A[i];

		int l=0;
	long long maxarrays=0;
	// multiset<int> seen;
	unordered_map<int,int> seen;
	for(int r=0;r<n;r++){
         // while(seen.count(A[r])){
         // 	l++;
         // 	seen.erase(A[r]);
         // }
         // seen.insert(A[r]);
		if (seen.count(A[r]))
		{
			l=max(l,seen[A[r]] + 1);
		}
		
			
         maxarrays+=(long long)(r-l+1);
         seen[A[r]]=r;
		
		 
	}
	
	cout<<maxarrays<<endl;
	return 0;
}