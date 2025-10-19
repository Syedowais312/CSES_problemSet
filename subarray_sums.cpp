#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,x;
	cin>>n>>x;
	vector<long long> A(n);
	for(int i=0;i<n;i++)cin>>A[i];
		//create a map for couting the elements frequency
	map<long long,long long> prefix_count;
//set 0's freq to 1
	prefix_count[0]=1;
	long long prefix=0;
	long long ans=0;
	for(int i=0;i<n;i++){
		//increase prefix sum
		prefix+=A[i];
		//subtract the current prefix from the value(x) that we need
		long long need=prefix-x;
	//and check if the "need" value is present in the map if yes then follow up the operations
		if(prefix_count.count(need))
			//increase the ans value
			ans+=prefix_count[need];


        //increase the map element value
			prefix_count[prefix]++;
		
	}
	cout<<ans<<endl;
	return 0;
}