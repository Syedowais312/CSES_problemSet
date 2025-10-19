#include<bits/stdc++.h>
using namespace std;

int maxDigit(long long n){
	long long maxi=0;
		while(n>0){
			maxi=max(maxi,n%10);
			n/=10;
		}
		return maxi;
}
int main(){
	long long n;
	cin>>n;
	int cnt=0;
	while(n>0){
		
        n-=maxDigit(n);
        cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
