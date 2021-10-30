#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll M = 10e8 + 7;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    if (x >= n)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {


        
        cout << "YES" << endl;
        return;
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
