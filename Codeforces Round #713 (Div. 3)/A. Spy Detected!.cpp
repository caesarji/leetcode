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
    cout<<endl;
    int n; cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){cin>>arr[i];}
    int temp=arr[1];
    // cout<<"temp"<<arr[1];
    bool flag=false;
    int index;
    for(int i=2;i<=n;i++){
        // cout<<temp<<"====="<<arr[i]<<endl;
        if(arr[i]==temp) flag=true;
        if(temp!=arr[i]) {index=i;
        // cout<<index;
            
        }
    }
    if(flag) {cout<<index<<endl; return;}
    else{ cout<<1<<endl;return;}
    
    
}

int main(){
    
    
    int t; cin>>t;
    while(t--){
        solve();
        
    }

    
    
return 0;

}

