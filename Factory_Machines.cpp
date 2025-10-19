#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,t;
	cin>>n>>t;
	vector<int> k(n);
	//take the input values
	for(int i=0;i<n;i++)cin>>k[i];
//the problem can be solved using binary search with much much less Time complexity
		//declare low and high, low =1
		long long low=1;
	//initiaze high with t*(the machine which give the product fastest)
	long long high=*min(k.begin(),k.end());
	high*=t;
	//initialize ans to high because this is the maximum value
	long long ans=high;
	//same shit do binary stuff
	while(low<=high){
       
		long long mid=(low+high)/2;
		long long product=0;
		//sum up total products can be made in "mid"time
		for(int i=0;i<n;i++){
			//total products can be build with ith machine i.e if k[i]=2 and mid=7 then product=mid/k[i]=3 we can only build 3 product at mid with this machine
			product+=mid/k[i];
			if(product>=t)break;
		}
         //if the time of sum of products obtained at mid is great than "t" than the work can be at less time so move high=mid-1 else low=mid+1
		if(product>=t){
			high=mid-1;
			ans=mid;
		}
		else {
			low=mid+1;
		}
	}
	//the answer
	cout<<ans<<endl;
	return 0;
}