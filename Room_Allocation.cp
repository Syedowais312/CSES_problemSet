#include<bits/stdc++.h>
using namespace std;
bool cmp(tuple<int,int,int>&a,tuple<int,int,int> &b){
		return get<0>(a)<get<0>(b);
	
}
int main(){
	int n;
	cin>>n;
	vector<tuple<int,int,int>> time;
	for(int i=0;i<n;i++){
		int arrival,departure;
		cin>>arrival>>departure;
		time.push_back({arrival,departure,i});
	}

	sort(time.begin(),time.end(),cmp);
	int room=0;
	vector<int> res(n);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	for(auto &[start,end,ind]:time){
      if(!pq.empty()&&pq.top().first<start){
          auto [prev_end,room_no]=pq.top();
          pq.pop();
          res[ind]=room;
          pq.push({end,room_no});

      }
      else{
      	room++;
      	res[ind]=room;
      	pq.push({end,room});
      }
	}
	cout<<room<<endl;
	for(int i=0;i<n;i++)cout<<res[i]<<" ";
		cout<<endl;
	return 0;
}