#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> t(n);
	for(int i=0;i<n;i++)cin>>t[i];

    long long sum = accumulate(t.begin(), t.end(), 0LL);
    long long mx = *max_element(t.begin(), t.end());

    cout << max(sum, 2 * mx) << endl;
	return 0;
}