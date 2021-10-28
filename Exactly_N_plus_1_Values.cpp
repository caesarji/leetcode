#include <bits/stdc++.h>
using namespace std;
#define unsigned long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    while (n--)
    {
        // cout << (1 << n) << " ";
        ans.push_back(1ULL << n);
    }
    ans.push_back(1);
    sort(ans.begin(), ans.end());
    for (auto c : ans)
    cout << c <<" ";
    cout<<endl;
    // cout << 1 << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // unsigned long long x=(1ULL<<60);
    // cout<<x<<endl;
}
