#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	vector<pair<long long,long long>> TAD;
	for(int i=0;i<n;i++){
		int duration,deadline;
		cin>>duration>>deadline;
		TAD.push_back({duration,deadline});

	}
	sort(TAD.begin(),TAD.end());

	long long time=0;
	long long maxi=0;
	for(auto &[dur,dead]:TAD){
		time+=dur;
		maxi+=dead-time;
	}

	cout<<maxi<<endl;
	return 0;
}