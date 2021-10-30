#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    ll ct = 0;
    int n=s.size();
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            ct++;
        else if (s[i] == 'b' && s[i + 1] == 'a')
            ct--;
    }
    if (ct == 0)
    {
        cout << s << endl;
    }
    else if (ct == 1)
    {
        s[n - 1] = 'a';
        cout << s << endl;
    }
    else
    {
        s[n - 1] = 'b';
        cout << s << endl;
    }
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