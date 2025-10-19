#include<bits/stdc++.h>
using namespace std;
void solve(int n,int from,int to){
    if(n==0)return;
int other=(1+2+3)-from-to;
    solve(n-1,from,other);
    cout<<from<<" "<<to<<endl;
    solve(n-1,other,to);
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    solve(n,1,3);
    return 0;
}

/*

The Tower of Hanoi game consists of three stacks (left, middle and right) and n round disks of different sizes. Initially, the left stack has all the disks, in increasing order of size from top to bottom.
The goal is to move all the disks to the right stack using the middle stack. On each move you can move the uppermost disk from a stack to another stack. In addition, it is not allowed to place a larger disk on a smaller disk.
Your task is to find a solution that minimizes the number of moves.
Input
The only input line has an integer n: the number of disks.
Output
First print an integer k: the minimum number of moves.
After this, print k lines that describe the moves. Each line has two integers a and b: you move a disk from stack a to stack b.
Constraints

1 \le n \le 16

Example
Input:
2

Output:
3
1 2
1 3
2 3

*/

/*
Hint:
the problem is to move the  n disk from 1->3 with the  help of 2 tower
if  n=1 directly 1->3
if n=2 first 1->2(the 1st disk)
       then 1->3(the 2nd the largest disk)
       then move back 2->(move the 1st disk back on the top of 2nd disk)

so, first we solve for n-1 disk i.e move the n-1 disk from 1->2
   and then move the nth disk to 3, and repeat the same thing for all the other disks
   if n=3
   1->3
   1->2
   3->2
   1->3
   2->1
   2->3
   1->3

   therefore the total numbers of move are 2^n - 1

*/