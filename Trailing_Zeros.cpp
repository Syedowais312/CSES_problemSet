#include<bits/stdc++.h>
using namespace std;

int main(){
   long long n;
   cin>>n;
   long long ans=0;
   for(long long i=5;i<=n;i*=5){
    ans+=n/i;
   }
   cout<<ans<<endl;
    return 0;

}

// Your task is to calculate the number of trailing zeros in the factorial n!.
// For example, 20!=2432902008176640000 and it has 4 trailing zeros.
// Input
// The only input line has an integer n.
// Output
// Print the number of trailing zeros in n!.
// Constraints

// 1 \le n \le 10^9

// Example
// Input:
// 20

// Output:
//4

//this problem is kind of interesting,
// the brute force doesnt work here, as the numbe becomes large and larger,
// even long long can't hold the value

//ex=5!=120, 100!=........ a large value, the long long will overflow 
//when u care fully observer the patter, by taking some examples, u can the actuall pattermn
//like see inthe factorial of 5 ignore allvalues we only pair of(2,5,.....) because this are numbers in the factorial contain zero
//example in 25 there two number of 5'square series (5,10)
//n/i is the number of zero's are inthr factor
//the time complexity is way way more reduce