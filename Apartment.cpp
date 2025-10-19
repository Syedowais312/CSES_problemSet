#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> A(n);
	vector<int> B(m);
     int cnt=0;
    for(int i=0;i<n;i++)cin>>A[i];
    for(int i=0;i<m;i++)cin>>B[i];
    	sort(A.begin(),A.end());
         sort(B.begin(),B.end());
         int i=0;
         int j=0;
         while(i<n&&j<m){
         	if(abs(A[i]-B[j])<=k){
         		i++;
         		j++;
         		cnt++;
         	}
         	else if(A[i]>B[j]+k){
         		j++;
         	}
         	else{
         		i++;
         	}

         }

         cout<<cnt<<endl;
	return 0;
}