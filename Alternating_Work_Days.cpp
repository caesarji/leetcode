#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve(){
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    if(p%a!=0 or q%b!=0){
        cout<<"NO"<<endl;
        return;
    }
    int d1 = p/a;
    int d2 = q/b;
    if(abs(d1-d2)==1 or abs(d1-d2)==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
