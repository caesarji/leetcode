#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll M = 10e8+7;

ll poww(ll n , ll x){
    ll ans=1;
    while(x--){
        // cout<<ans<<endl;
        ans = ans%M*n%M;
    }
    return ans%M;
}


void solve()
{

    ll n, k;
    cin >> n >> k;

    ll ans = 0;
    int x=0;
    while (k > 0)
    {
        if (k % 2)
        { 
            ll p=poww(n, x);
            ans = (ans%M + p );
            // cout<<p<<endl;

        }
        k /= 2;
        x++;
    }
    cout << ans%M << endl;
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
