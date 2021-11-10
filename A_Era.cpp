// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define v(v) vector<ll> v
// #define vv(v, n) vector<ll> v(n)
// #define all(v) v.begin(), v.end()
// #define fl(i, n) for (int i = 0; i < n; i++)

// ll M = 10e8 + 7;
// void solve()
// {
//     ll n;
//     cin >> n;
//     vv(ar, n);
//     ll mx = -1;
//     ll ind;
//     for (int i=0 ; i<n ; i++)
//     {
//         cin >> ar[i];

//     }
//     // for (int i=0 ; i<n ; i++)
//     // {
//     //     if (ar[i] > mx)
//     //     {
//     //         ind = i;
//     //         mx = ar[i];
//     //     }

//     // }
//     // cout << mx << ind << 1 << endl;
//     // cout << mx - ind - 1 << endl;

//     ll sum = 0;

//     // // 1 2 5 7 4
//     // //  2+ 1

//     ll p=0;
    // fl(i, n)
    // {

    //     if (ar[i] > p)
    //     {
    //         sum+= ar[i] -(p+1);
    //         p=ar[i];
    //     }
    //     else{
    //         p++;
    //     }
    // }

//     cout << sum << endl;
// }

// signed main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define v(v) vector<ll> v
#define vv(v, n) vector<ll> v(n)
#define all(v) v.begin(), v.end()
#define fl(i, n) for (ll i = 0; i < n; i++)

ll M = 10e8 + 7;
void solve()
{
    ll n;
    cin >> n;
    vv(ar, n);
    for (auto &c : ar)
        cin >> c;
    ll sum = 0;

    // 1 2 5 7 4
    //  2+ 1

    fl(i, n)
    {
        if (i == 0)
        {
            sum += (ar[0] - 1LL);
        }
        else if (ar[i] > max((i + 1LL), (ar[i - 1] + 1LL)))
        {
            sum += min((ar[i] - (i + 1LL)), (ar[i] - (ar[i - 1] + 1LL)));
            // cout <<"     "<< ar[i] - ar[i - 1] - 1 << endl;
        }
    }

    cout << sum << endl;
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
