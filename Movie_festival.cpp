#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &t1,const pair<int,int> &t2){
		return t1.second<t2.second;
	}
int main(){
	int n;
	cin>>n;
	vector<pair<long,long>>  time;
	for(int i=0;i<n;i++){
		long long arrival,leaving;
		cin>>arrival>>leaving;
		time.push_back({arrival,leaving});
	}
	  sort(time.begin(),time.end(),cmp);
	int cnt=0;
	int current_end=0;
	for(auto &movie:time){
		if(movie.first>=current_end){
			cnt++;
			current_end=movie.second;
		}
	}

	cout<<cnt<<endl;
	return 0;
}