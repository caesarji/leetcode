#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 200001
#define md 1000'000'007
int main()
{
    ll fac[sz];
    fac[0] = 1;
    for (ll h = 1; h < sz; h++)
    {
        fac[h] = (fac[h - 1] % md * (h % md)) % md;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        int mx = INT_MAX;
        for (int h = 0; h < n; h++)
        {
            cin >> v[h];
            mx = mx & v[h];
        }
        ll res = 0;
        for (auto &i : v)
        {
            if (i == mx)
                res++;
        }
        if (res < 2)
        {
            cout << 0 << endl;
            continue;
        }
        ll fin = (res % md * ((res % md - 1 + md) % md)) % md;
        fin = (fin % md * (fac[n - 2] % md)) % md;
        cout << fin << endl;
    }
}