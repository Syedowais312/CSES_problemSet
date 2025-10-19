#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long sum=0;
	long long maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		sum+=ele;
		if(sum<0){
			 maxsum=max(maxsum,sum);
			sum=0;
		}
		else{
        maxsum=max(maxsum,sum);
		}
	}
	cout<<maxsum<<endl;
	return 0;
}