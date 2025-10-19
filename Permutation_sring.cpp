#include<bits/stdc++.h>
using namespace std;
void solve(string &s,string &pm,set<string>&ans,vector<int>&vis)
{
    if(pm.size()==s.size()){
        ans.insert(pm);
        return;
    }
   
    for(int ind=0;ind<s.size();ind++){
        if(!vis[ind]){
          vis[ind]=1;
          pm.push_back(s[ind]);
              solve(s,pm,ans,vis);
              pm.pop_back();
                      vis[ind]=0;
            }

    }
 
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    set<string> ans;
    string pm;
    vector<int> vis(n,0);
    solve(s,pm,ans,vis);
    cout<<ans.size()<<endl;;
    for(auto &s:ans){
        cout<<s<<endl;
    }
    return 0;
}

/*
Given a string, your task is to generate all different strings that can be created using its characters.
Input
The only input line has a string of length n. Each character is between a–z.
Output
First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.
Constraints

1 \le n \le 8

Example
Input:
aabac

Output:
20
aaabc
aaacb
aabac
aabca
aacab
aacba
abaac
abaca
abcaa
acaab
acaba
acbaa
baaac
baaca
bacaa
bcaaa
caaab
caaba
cabaa
cbaaa
*/


/*
Hint:
here we use recursion,
declare a vector of string 
declare a string to generate permutation,
declare a vector for tracking which element is visited


*/