#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define fl(i,n) for(int i=0;i<n;i++)

ll M = 10e8 + 7;
ll range = 3 * 10e4 + 5;
vector<ll> pr;
bool isPrime(ll n)
{
    if (n <= 1LL)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve()
{
    ll n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    bool ok=true;
    ll in=-1;
    fl(i,n){
        if(s[i]==ch)in=i;
        if(s[i]!=ch)ok=false;
    }
    if(ok)
    cout<<"0\n";
    else if(in==-1){
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    else if(in>=n/2)
    {
        
        cout<<"1\n"<<in+1<<"\n";
    }
    else
    {
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
}

signed main()
{
    for (ll i = 2; i <= range; i++)
    {
        if (isPrime(i))
            pr.pb(i);
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
