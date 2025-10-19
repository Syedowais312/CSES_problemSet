#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long sum=1LL*n*(n+1)/2;
	if(sum%2!=0){
		cout<<"NO\n";
		return 0;
	}
	
		cout<<"YES\n";
		vector<int> set1,set2;
		long long target=sum/2;
		for(int i=n;i>=1;i--){
			if(i<=target){
				set1.push_back(i);
				target-=i;

			}
			else{
				set2.push_back(i);
			}
		}
		cout<<set1.size()<<endl;
		for(int x:set1)cout<<x<<" ";
		cout<<endl<<set2.size()<<endl;
		for(int x:set2)cout<<x<<" ";
		cout<<endl;
		
		

	return 0;
}

// Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
// Constraints

// 1 \le n \le 10^6

// Example 1
// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6

// Output:
// NO


//HInt: first check the sum of the given n natural number are even or not,
//if not even we can't divide it
//else take target and declare two sets; 
//loop from back and check whether the condition holds(i<=target) then target-i
//if not directly put it into second set