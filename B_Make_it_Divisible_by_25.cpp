#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define fl(i, n) for (int i = 0; i < n; i++)

ll M = 10e8 + 7;
pair<ll, ll> dp[4] = {{0, 0}, {5, 0}, {2, 5}, {7, 5}};
void solve()
{
    string s;
    cin >> s;
    unordered_map<ll, ll> mpp;
    ll n = s.length();
    fl(i, n)
    {
        mpp[(ll)(s[i] - '0')]++;
    }
    ll ans = LONG_LONG_MAX;
    bool ok = false;

    for (int z = 0; z < 4; z++)
    {
        ok = false;
        if ((dp[z].first == 0 && mpp[dp[z].first] > 1) || (mpp[dp[z].second] > 0 && mpp[dp[z].first] > 0))
        {
            ll c = 0;
            ll in;
            for (int i = n - 1; i >= 0; i--)
            {
                if (stoi(s.substr(i, 1)) == dp[z].first && c > 0)
                {
                    in = i;
                    ok = true;
                    break;
                    c++;
                }
                else if (stoi(s.substr(i, 1)) == dp[z].second)
                {
                    c++;
                }
            }
            if (ok)
            {
                ans = min(ans, n - in - 2);
            }
        }
    }
    if (mpp[0] > 0)
    {
        ans = min(ans, n - mpp[0]);
    }
    cout << ans << "\n";
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
