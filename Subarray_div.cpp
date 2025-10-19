#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long prefix=0;
	vector<int> A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	//the logic is simple we know that the given condition is
	//(prefix[r]-prefix[l-1]%n==0)
	//therefore perfix[r]%n==prefix[l-1]%n;
	//thats it, we just have to find the pairs
	map<long long,long long> freq;
	freq[0]=1;
	for(int i=0;i<n;i++){
		prefix+=A[i];
      long long rem=((prefix%n)+n)%n; // sice the test case can go to extreme negative we use this method so the the value always remainds possitive (basically we are making mirror values)
      freq[rem]++;
	}
	long long ans=0;
	for(auto &p:freq){
		ans+=(p.second)*(p.second-1)/2;
	}
	cout<<ans<<endl;
	return 0;
}