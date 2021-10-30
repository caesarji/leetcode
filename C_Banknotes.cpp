#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    cout<<"---------"<<endl;
    ll n, k;
    cin >> n >> k;
    k += 1;
    ll an = 0;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    for (ll i = 0; i < n - 1; i++)
    {
        if (k > 0)
        {
            ll x = pow(10, arr[i + 1] - arr[i]) - 1;
            ll val = min(x, k);
            an += pow(10, arr[i]) * val;
            k -= val;
            cout<<an<<endl;
        }
    }
    an += k * pow(10, arr[n - 1]);
    cout << an << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}