#include<bits/stdc++.h>
using namespace std;

bool canDivide(vector<long long> &A,long long k,long long maxSum){

	long long curr_sum=0;
	long long parts=1;
	for( long long x: A){
		if(curr_sum+x>maxSum){
			parts++;
			curr_sum=x;
			if(parts>k)return false;
		}
		else{
			curr_sum+=x;
		}
	}
	return true;
}

int main()
{
	long long n,k;
	cin>>n>>k;
	vector<long long> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	long long low=*max_element(A.begin(),A.end());
	long long high=accumulate(A.begin(),A.end(),0LL);
	long long ans=high;
	while(low<=high){
		long long mid=(low+high)/2;
		if(canDivide(A,k,mid)){
          ans=mid;
          high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}