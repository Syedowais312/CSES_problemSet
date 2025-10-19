#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arrival(n),leaving(n);

	for(int i=0;i<n;i++){
		cin>>arrival[i]>>leaving[i];
	}

		sort(arrival.begin(),arrival.end());
		sort(leaving.begin(),leaving.end());

		int i=0;int j=0;
		int cnt=0;
		int maxcount=0;

		while(i<n&&j<n){

			if(arrival[i]<leaving[j]){
				i++;
				cnt++;
				maxcount=max(maxcount,cnt);
			}
			else{
				j++;
				cnt--;
			}
		}
		cout<<maxcount<<endl;
		return 0;
}