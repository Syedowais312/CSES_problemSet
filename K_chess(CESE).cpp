#include <bits/stdc++.h>
using namespace std;
int main() {
   int max_n;
   cin>>max_n;
 for(long long n=1;n<=max_n;n++){
  long size=n*n;
   long long all_moves=size*(size-1)/2;
   long long bad_moves=0;
    bad_moves=8*(n-4)*(n-4);//number of times 8 appeared
   bad_moves+=3*8;//number of times 3 appeared
   bad_moves+=6*(n-4)*4;//number of times 4 appeared
  bad_moves+=4*(n-3)*4;//number of times 4 appeared
   bad_moves+=2*4;
   bad_moves/=2;
   cout<<all_moves-bad_moves<<endl;


 }
  return 0;
}
//Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
//Input
//The only input line contains an integer n.
//Output
//Print n integers: the results.
//Constraints

//1 \le n \le 10000

//Example
//Input:
//8

//Output:
//0
//6
//28
//96
//252
//550
//1056
//1848

//Hint make a matrix of large k(sayk=8,9) observer the pattern and write the formula