#include<bits/stdc++.h>
using namespace std;
bool solve(){
int n,a,b;
        cin>>n>>a>>b;
        int tie=n-(a+b);
       
        if(tie<0){
            return false;
        }
        if(a==n&&b>0) return false;
        if(b==n&&a>0) return false;
        int nontie=a+b;
        if(a+b>0&&(a==0||b==0))return false;
        cout<<"YES\n";
        for(int i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;

        for(int i=1;i<=nontie;i++){
            int x=i+a;
            if(x>nontie)x-=nontie;
            cout<<x<<" ";
        }

        for(int i=nontie+1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
        return true;

        
}

int main(){
    int t;
    cin>>t;
    while(t--){
        
      if(!solve()){
        cout<<"NO"<<endl;
      }


    }
    return 0;
}