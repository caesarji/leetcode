#include<bits/stdc++.h>
using namespace std;
// #define int long long

const int mod=1000000007;
const int MAX=100005;
 
int mul(int a, int b){
  return (a*b)%mod;
}

// int mp1[MAX*4];

void solve(){
    int a, b;
    cin>>a>>b;
    
    string str;
    cin>>str;
    int cnt0=0;
    int cnt1=0;
    int cntq=0;
    int n=str.size();
    if(a%2!=0 && b%2!=0) {cout<<-1<<endl; return;}  
    // if(a==0 || b==0) {cout<<str<<endl; return;}
    for(int i=0;i<str.size();i++){
        if(str[i]=='0')cnt0++;
        else if(str[i]=='1') cnt1++;
        else cntq++;
    }
    if(a<cnt0  || b<cnt1) {cout<<-1<<endl; return;}  
    // cout<<"here";
    for(int i=0;i<str.size();i++){
        if(     str[i]!=str[n-i-1]   && (str[i]!='?' && str[n-i-1]!='?')   ) {cout<<-1<<endl; return;}
        else if(     str[i]!=str[n-i-1]   && (str[i]=='?' || str[n-i-1]=='?')   ) {
            
            if(str[i]!='?') {str[n-i-1]=str[i]; 
                if(str[i]=='0') cnt0++; 
                else cnt1++;}
            else if(str[n-i-1]!='?') {str[i]=str[n-i-1];
                if(str[n-i-1]=='0') cnt0++; 
                else cnt1++;}
            
        }
         if((str[i]=='?' && str[n-i-1]=='?') ){
            //  cout<<"here";
            if(min(a-cnt0,b-cnt1)==b-cnt1  && cnt0<a)  {str[i]='0'; str[n-i-1]='0'; if(i==(n-i-1)) cnt0++; else cnt0+=2;}
            else if(min(a-cnt0,b-cnt1)==a-cnt0  && cnt1<b)  {str[i]='1'; str[n-i-1]='1';  if(i==(n-i-1)) cnt1++; else cnt1+=2;}
            
        }
    }
    if(cnt0!=a || cnt1!=b){cout<<-1<<endl; return;}
    
    for(int i=0;i<str.size();i++){ if(str[i]!=str[n-i-1])  {cout<<-1<<endl; return;}}
     cout<<str<<endl; return;
}

int main(){
    
    
    int t; cin>>t;
    while(t--){
        solve();
        
    }

    
    
return 0;

}

