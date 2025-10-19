#include <bits/stdc++.h>
using namespace std;

int main() {
    //taking input from user
   string s;
   cin>>s;
   //initializing a vector for 26 alphabet in the form of number i.e A->0,B->1.....

   vector<int> freq(26,0);
   string result;
   //initialize a random charcter accept A-Z
   char prev='#';

   int maxfreq=INT_MIN;
   int n=s.size();
   //storing the frequency of all the char in the string
   for(char c: s){
      freq[c-'A']++;
      maxfreq=max(maxfreq,freq[c-'A']);

   }

//if the maximum frequency of the elememt is greater than half of the size its impoosible to make the string 
 //i.e if ABBBAEB (we cannot re arrange B)  
if(maxfreq>(n+1)/2){
    cout<<-1<<endl;
    return 0;
}

//iterate through entire size
   for(int i=0;i<n;i++){
    bool found=false;
    //iterate through first elements A,B.....
    for(int j=0;j<26;j++){

         if(freq[j]==0)continue;
        //store the first element with freq>0 as c 
         char c='A'+j;
         //adjacent element should not be same
         if(prev==c)continue;

        //reduce the size
         int remaining= n-i-1;
         //check the new freq
         int newmaxfreq=0;
         //modify the freq
         for(int k=0;k<26;k++){
            
            if(k==j){
                newmaxfreq=max(newmaxfreq,freq[k]-1);
            }
            else{
                newmaxfreq=max(newmaxfreq,freq[k]);
            }
        }

            //if the new freq exceed the condition, not possible
            if(newmaxfreq<=(remaining+1)/2){
                result.push_back(c);
                freq[j]--;
                prev=c;
                found=true;
                break;
            }
         }
         if(!found){
            cout<<-1<<endl;
            return 0;
         }
    

   }
    cout<<result<<endl;

    return 0;
}
