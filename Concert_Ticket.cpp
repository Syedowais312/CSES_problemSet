#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	multiset<long long> ticket;
	for(int i=0;i<n;i++){
		int price;
		cin>>price;
		ticket.insert(price);
	}

	for(int i=0;i<m;i++){
		int maxprice;
		cin>>maxprice;
		auto it=ticket.upper_bound(maxprice);
		if(it==ticket.begin()){
			cout<<-1<<endl;
		}
		else{
			it--;
			cout<<*it<<endl;
			ticket.erase(it);
		}
		
			
	}
	return 0;
}