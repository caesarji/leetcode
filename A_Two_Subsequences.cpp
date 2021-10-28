#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
    string s;
    cin>>s;
    char mn = 'z';
    for (auto c : s)
    {
        if (mn > c)
        {
            mn = c;
            // cout << mn << " " << c << endl;
        }
    }
    string s1 = "";
    string s2 = "";
    s1 += mn;

    bool flag = false;

    for (auto c : s)
    {
        if (c == mn && !flag)
        {
            flag = true;
            continue;
        }
        else
            s2 += c;
    }
    cout << s1 << " " << s2 << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
