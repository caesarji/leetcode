#include <bits/stdc++.h>
using namespace std;
#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()
#define fl(i,n)         for(int i=0;i<n;i++)

ll M = 10e8 + 7;
void solve()
{
    ll a , b , c;
    cin >> a >> b>>c;
    ll mx=max(a , max(b , c));

    if(a>b && a>c){
        cout<<0<<" ";
    }
    else{
        cout<<mx-a+1<<" ";
    }
    if(b>a && b>c){
        cout<<0<<" ";
    }
    else{
        cout<<mx-b+1<<" ";
    }
    
    if(c>a && c>b){
        cout<<0<<" "<<endl;
    }
    else{
        cout<<mx-c+1<<endl;
    }
   
}

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
