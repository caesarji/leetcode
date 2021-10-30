#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

ll M = 10e8 + 7;
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> ar(n);

    ll mn = INT_MAX;
    for (auto &c : ar)
    {
        cin >> c;
        if (c < mn)
            mn = c;
    }
    set<ll> s;
    for (auto c : ar)
    {
        if (c != mn)
        {
            s.insert(c - mn);
        }
    }
    sort(all(ar));
    if (ar[0] == ar.back())
    {
        cout << -1 << endl;
        return;
    }
    ll g = *s.begin();
    for (auto c : s)
    {
        g = gcd(g, c);
    }
    cout << g << endl;
}

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    };
}
