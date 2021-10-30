#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n,k;
    cin>>n>>k;
    ll f=1;
    ll cnt=0;
    while(f<=k && f<n){
        f*=2;
        cnt++;
    }
    if(f<n)
        cnt+=(n-f+k-1)/k;
    cout<<cnt<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
