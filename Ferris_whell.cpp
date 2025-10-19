#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long x;
  cin>>n>>x;
  vector<long long> A(n);
  for(int i=0;i<n;i++)cin>>A[i];
     sort(A.begin(),A.end());

  	int i=0;
     int j=n-1;
     int cnt=0;
     while(i<=j){
     	if(A[i]+A[j]<=x){
     		i++;	
     	}
     	j--;
     	cnt++;
     }
     cout<<cnt<<endl;
     return 0;

}



//if 2 or more childerns can be seated
// int main(){
// 	int n,x;j--;
// 	cin>>n>>x;
// 	int gondala=1;
// 	int sum=0;
// 	vector<int> A(n);
// 	for(int i=0;i<n;i++)cin>>A[i];
// 	for(int i=0;i<n;i++){
		
// 		if(sum+A[i]<=x){
//        	sum+=A[i];
//        }
//        else{
//        	sum=A[i];
//        	gondala++;
//        }
// 	}
// 	cout<<gondala<<endl;
// 	return 0;
// }