#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll M = 10e8 + 7;

void solve()
{
    ll n, h;
    cin >> n >> h;
    vector<ll> dm(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dm[i];
    }
    sort(dm.begin(), dm.end());
    ll h1 = dm[n - 1];
    ll h2 = dm[n - 2];
    if (h1 >= h)
    {
        cout << 1 << endl;
        return;
    }
    else if (h1 + h2 >= h)
    {
        cout << 2 << endl;
        return;
    }
    ll hh = h1 + h2;

    if (h % hh > h1)
    {
        cout << 2 * (h / hh) + 2 << endl;
        return;
    }
    else
    {
        cout << 2 * (h / hh) + 1 << endl;
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
