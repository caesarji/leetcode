#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v(v) vector<ll> v
#define vv(v, n) vector<ll> v(n)
#define all(v) v.begin(), v.end()
#define fl(i, n) for (int i = 0; i < n; i++)

ll M = 10e8 + 7;

void solve()
{

    ll n, x;
    cin >> n >> x;
    x++;
    vv(ar, n);
    fl(i, n)
    {
        cin >> ar[i];
    }
    // 5 1 2 3 4
    ll y = x - 1;
    v(v);
    // 5 1 2 3 4
    while (y >= 0)
    {
        v.pb(ar[y]);
        y--;
    }
    y = x - 1;
    while (y >= 0)
    {
        v.pb(ar[n - 1 - y]);
        y--;
    }

    sort(all(v));
    v(ans);
    y = x - 1;
    ll zz = 0;
    while (y >= 0)
    {
        ans.pb(v[zz]);
        zz++;
        y--;
    }
    for (auto c : ans)
        cout << c << " ";
    cout << endl;
    y = n - 2 * x;
    ll z = x;
    while (y > 0)
    {
        ans.pb(ar[z]);
        z++;
        y--;
    }
    for (auto c : ans)
        cout << c << " ";
    cout << endl;

    y = x - 1;
    while (y >= 0)
    {
        ans.pb(v[zz]);
        zz++;
        y--;
    }
    for (auto c : ans)
        cout << c << " ";
    cout << endl;
    sort(all(ar));
    for (auto c : ans)
        cout << c << " ";
    cout << endl;
    fl(i, n)
    {
        if (ans[i] != ar[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
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
