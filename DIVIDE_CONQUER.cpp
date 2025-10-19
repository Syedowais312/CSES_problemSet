#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
long long modpow(long long base,long long exp,long long mod){
    long long ans=1;
    while(exp>0){
        if(exp%2==1){
            ans=(ans*base)%mod;
        }
           
            base=(base*base)%mod;
             exp/=2;
       
    }
   return ans;   
       
}
int main(){
    long long n;
    cin>>n;
    cout<<modpow(2,n,MOD);
    return 0;
}


// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
// Input
// The only input line has an integer n.
// Output
// Print the result modulo 10^9+7.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 8


//Hint:
//main thing is to reduce the time complexity
//this proge=ram uses divide and conquer algo 
//the loop runs till the exp>0 
// if the expo is odd multiply the base value eith the ans
//if even multiply base*base and reduce expo by 2(here where is the magic is happening)
