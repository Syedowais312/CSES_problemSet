#include<bits/stdc++.h>
using namespace std;
string toBinary(int num, int n) {
    string s = "";
    for (int i = n - 1; i >= 0; i--) {
        if (num & (1 << i)) s += '1';
        else s += '0';
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=(1<<n);i++){
        cout<<toBinary(i,n)<<endl;
    }
    return 0;
}