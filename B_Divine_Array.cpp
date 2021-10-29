#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define push_back pb

ll M = 10e8 + 7;

void solve()
{
    // cout << "----------------------------------------" << endl;
    ll n;
    cin >> n;

    vector<ll> ar(n);
    map<ll, vector<ll>> mpp;
    ll kk = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    mpp[kk++] = ar;
    vector<ll> temp = mpp[kk - 1];
    // for (auto c : temp)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    ll z = 100;
    while (z--)
    {
        map<ll, ll> mp;
        for (auto c : ar)
        {
            mp[c]++;
        }
        set<ll> st;
        for (int i = 0; i < ar.size(); i++)
        {
            // cout<<"here"<<endl;
            ar[i] = mp[ar[i]];
            st.insert(ar[i]);
        }
        mpp[kk++] = ar;
        temp = mpp[kk - 1];
        // for (auto c : temp)
        // {
        //     cout << c << " ";
        // }
        // cout << endl;
        for (auto c : ar)
        {
            mp[c]++;
        }
        bool flag = true;
        for (auto c : st)
        {
            if (c != mp[c])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            break;
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll x, k;
        cin >> x >> k;
        ll ans=(kk<=k)?mpp[kk-1][x - 1]:mpp[k][x - 1];
        cout<<ans<<endl;
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
