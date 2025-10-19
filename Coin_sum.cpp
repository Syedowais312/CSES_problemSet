#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	sort(A.begin(),A.end());
     long long res=1;
     for(int i=0;i<n;i++){
     	if(A[i]<=res){
     		res+=A[i];
     	}
     	else break;
     }	

     cout<<res<<endl;
	return 0;
}


//if [1]->{1,1+1=2}=> res=3;
//if [1,2,3]->{1,1+1=2,2+2=4,3+4=7}=> res=7;
//if[2,3]->array[0]<=res it becomes false do res->1;
