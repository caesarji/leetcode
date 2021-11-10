#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define fl(i, n) for (int i = 0; i < n; i++)

ll M = 10e8 + 7;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> ar(n);

    for (auto &c : ar)
    {
        cin >> c;
    }
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                continue;
            else if (ar[i] <= ar[i - 1])
            {
                flag = false;
                cout << "yes" << endl;
                return;
            }
        }
        if (flag)
        {
            cout << "no" << endl;
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

void solve()
{
    int n;
    cin >> n;
    std::list<int> lst;
    forx(i, n)
    {
        int x;
        cin >> x;
        lst.push_back(x);
    }

    while (lst.size())
    {
        bool deleted = false;
        int ind = lst.size();
        auto it = lst.end();
        --it;
        for (; it != lst.begin(); --it, --ind)
        {
            if (*it % (ind + 1))
            {
                deleted = true;
                lst.erase(it);
                break;
            }
        }

        if (!deleted && *it % (ind + 1))
        {
            deleted = true;
            lst.erase(it);
        }
        if (!deleted)
        {
            break;
        }
    }
    if (lst.size())
        cout << "NO\n";
    else
        cout << "YES\n";
}
