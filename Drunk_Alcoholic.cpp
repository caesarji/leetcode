#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
// #define all(v) v.begin(), v.end()
// #define fl(i, n) for (int i = 0; i < n; i++)

ll M = 10e8 + 7;
void solve()
{
    // cout<<"here"<<endl;
    ll k;
    cin >> k;
    if (k % 2 != 0)
    {
        cout << 2 * (k / 2) + 3 << endl;
    }
    else
    {
        cout << 2 * (k / 2) << endl;
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
