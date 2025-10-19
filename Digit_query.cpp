#include<bits/stdc++.h>
using namespace std;
int main(){

	long long q;
	cin>>q;
	while(q--){
		long long k;
		cin>>k;
		long long start=1;
		long long count=9;
		long long lenght=1;

		while(k>count*lenght){
			k-=count*lenght;
			lenght++;
			count*=10;
			start*=10;
		}
		long long num=start+(k-1)/lenght;
		long long digit=(k-1)%lenght;
		string s=to_string(num);
		cout<<s[digit]<<endl;
	}
	return 0;
}
/*
Consider an infinite string that consists of all positive integers in increasing order:
12345678910111213141516171819202122232425...
Your task is to process q queries of the form: what is the digit at position k in the string?
Input
The first input line has an integer q: the number of queries.
After this, there are q lines that describe the queries. Each line has an integer k: a 1-indexed position in the string.
Output
For each query, print the corresponding digit.
Constraints

1 \le q \le 1000
1 \le k \le 10^{18}

Example
Input:
3
7
19
12

Output:
7
4
1

*/