#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll M = 10e8 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 1;
    while (k > 0)
    {

        x = ((n % M) * (x % M)) % M;
        k--;
    }
    cout << x << endl;
    // ll f = 1;
    // while (n > 0)
    // {
    //     f = ((f % M) * n) % M;
    //     n--;
    // }
    // cout << "factorial " << f << endl;

    // cout << (x * f) % M << endl;
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
