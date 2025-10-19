#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	long long x,n;
	cin>>x>>n;
	//TLE (brute force)
	// vector<int> P;
	// P.push_back(0);
	// P.push_back(x);
	// vector<int> res;
	// for(int i=0;i<n;i++){
	// 	int position;
	// 	cin>>position;
	// 	P.push_back(position);
	// 	sort(P.begin(),P.end());
	// 	int maxi=INT_MIN;
	// 	for(int i=1;i<P.size();i++){
	// 		maxi=max(maxi,abs(P[i-1]-P[i]));
	// 	}
	// 	res.push_back(maxi);

	// }

	// for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
	// 	cout<<endl;

	set<long long> position;
	multiset<long long> length;
	//the etreme point are stored
	position.insert({0,x});
	length.insert(x);
	for(int i=0;i<n;i++){
		//take the element
		long long pos;
		cin>>pos;
		//find the ele which is just greater than pos in postion
		auto right=position.upper_bound(pos);
	//find the ele which is just greater than pos in postion		
		auto left=prev(right);

		 length.erase(length.find(*right - *left));

		//insert the possible lenghts from left and right
		length.insert(pos-*left);
		length.insert(*right-pos);

		position.insert(pos);
          //the max element is the answer for every addition
		cout<<*length.rbegin()<<" ";
		

	}
	return 0;

}