#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		vector<int> A(n);
		for(int i=0;i<n;i++)cin>>A[i];
			sort(A.begin(),A.end());

		int cnt=1;
		int maxi=INT_MIN;
		if(int i=0;i<n-1;i++){
          if(A[i+1]>A[i]){
          	cnt++;
          }
          	maxi=max(maxi,cnt);
          	cnt=1;

          
		}
		maxi=max(maxi,cnt);
		cout<<maxi<<endl;
		return
	}
}