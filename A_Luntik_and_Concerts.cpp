#include <bits/stdc++.h>
using namespace std;
#define long long int
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + 2 * b + 3 * c;
    if (s % 2)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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
