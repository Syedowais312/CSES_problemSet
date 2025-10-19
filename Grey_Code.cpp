#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //take the input
    cin>>n;
    //make a vector oftype string
    vector<string> gray;
    //by default we will add two values 0 and 1
    gray.push_back("0");
    gray.push_back("1");
    // if the input is grater than 2 then the it proceed by loop
    for(int i=2;i<=n;i++){
        //make another vector of type string because we need two element which differ by one element
        vector<string> rev=gray;

        reverse(rev.begin(),rev.end());
        //add 0 in the gray vector at the end
        for(auto &s:gray)s="0"+s;
        //add 1 in the rev vector at the end
        for(auto &r:rev)r="1"+r;
        //this makes the uniques by one element and insert the rev at the end of gray vectot
        gray.insert(gray.end(),rev.begin(),rev.end());
    }
    for(auto &s:gray){
// some elemets have size less than n so add 0's at the end
        if((int)s.size()<n)cout<<string((n-s.size()),'0')<<endl;
        else cout<<s<<endl;
    }
    return 0;

}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
 int total=1<<n //this are the total elements need to display
 for(int i=0;i<total;i++){
 int gray=i^(i>>1); //formula to calculate grey
 string s=bitset<16>(gray).to_string(); //this makes the value 16 bit which are constraints
 cout<<s.substr(16-n)<<endl; ///trim the elemnts only to given number
 }
 return 0;
}

*/