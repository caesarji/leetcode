#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()

ll M = 10e8 + 7;
// bool comp(int a, int b)
// {
//     return a > b;
// }
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> ar(k);

    for (auto &c : ar)
    {
        cin >> c;
        c=n-c;
    }

    sort(all(ar));
    ll sum = 0;
    ll cnt = 0;
    for (auto c : ar)
    {
        if (sum +c < n)
        {
            sum += c;
            cnt++;
        }
    }

    cout << cnt << endl;
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
