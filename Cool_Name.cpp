#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
// #define all(v) v.begin(), v.end()
// #define fl(i,n)         for(int i=0;i<n;i++)

ll M = 10e8 + 7;
void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    ll pow=0LL;
    ll n =s.size();
    for(int i=0 ; i<n ; i++){
        // cout<<s[i]<<" "<<s[i]-'a'<<endl;
        pow+= (int)(s[i]-'a' +1)*(i+1);
    }
    cout<<pow<<endl;
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