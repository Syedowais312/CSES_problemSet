#include <bits/stdc++.h>
using namespace std;
bool cmp(const tuple<int,int,int> &a, const tuple<int,int,int> &b){
    if(get<0>(a)!=get<0>(b)){
        return get<0>(a)<get<0>(b);
    }

    return get<1>(a)>get<1>(b);
}

int main() {
    int n;
    cin>>n;
    //this vector contain a list of left,right, and index
    vector<tuple<int,int,int>> range;
    for(int i=0;i<n;i++){
    	int r1,r2;
    	cin>>r1>>r2;
    	range.push_back({r1,r2,i});
    }//sort the elements as left range decreasing order and right range increasing order
    //right range decreasing because if the left range has 2 same element like (1,5),(1,10) then 1,10 should comes first
    sort(range.begin(),range.end(),cmp);
   vector<int> contain_other(n,0),is_contained(n,0);

   multiset<int> seen_right;
   for(auto &[x,y,i]:range){
   is_contained[i]=seen_right.size()-distance(seen_right.begin(),seen_right.lower_bound(y));
   seen_right.insert(y);
   }

    multiset<int> future_right;
   for(int i=n-1;i>=0;i--){
     auto [l, r, ind] = range[i];
   contain_other[ind]=distance(future_right.begin(),future_right.upper_bound(r));
   future_right.insert(r);
   }


for(int i=0;i<n;i++)cout<<contain_other[i]<<" ";
    cout<<endl;
   for(int i=0;i<n;i++)cout<<is_contained[i]<<" ";
    cout<<endl;

return 0;

}
