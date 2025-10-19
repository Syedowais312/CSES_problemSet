#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> freq;
   // make a map and count the frequency of each element
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    int odd=0;
    char oddchar=0;
    //and then check how may odd freq elements are present

    for(const auto &pairs:freq){
        if(pairs.second%2!=0){
            odd++;
            oddchar=pairs.first;
        }
    }
    //if there are more than 1 immediately exit the program by printing "No solution"

    if(odd>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    /*
    declare a empty string half;
iterate through all the elements int the freq and keep adding half the elements int to the string
(example freq[A] is 4 then add 4/2 that is 2 elements into half string)
and then decalre a string called middle
*/
    string half="";
    for(const auto &p:freq){
       half+=string(p.second/2,p.first);
    }
    string rev=half;
    reverse(rev.begin(),rev.end());
    string middle="";
    //and check if there is only odd present(we have already counted the odd elements)

    if(odd==1){
       middle=string(freq[oddchar]%2,oddchar);
    }   
    cout<<half<<middle<<rev<<endl;
    return 0;

}
/*
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).
Input
The only input line has a string of length n consisting of characters A–Z.
Output
Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".
Constraints

1 \le n \le 10^6

Example
Input:
AAAACACBA

Output:
AACABACAA
*/

/*Hint:
so as we know we can almost one odd frequency element int he sting
example:1) AADAA is a palidrome also observation, it has only one odd
2) AADEAA cannot be a palidrome
3) AADD is a valid palidrome even also it consist only even frequency of elements
so the logic make a map and count the frequency of each element
and then check how may odd freq elements are present
if there are more than 1 immediately exit the program by printing "No solution"
or else
declare a empty string half;
iterate through all the elements int the freq and keep adding half the elements int to the string
(example freq[A] is 4 then add 4/2 that is 2 elements into half string)
and then decalre a string called middle 
and check if there is only odd present(we have already counted the odd elements)
and add that element into the middle (only one char coz already half elements are added in the half)
and then display half+middle+reverese(half)

*/
