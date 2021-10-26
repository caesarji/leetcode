#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    int cnt=0 , d=0;
    for (auto c : ar)
    {
        int x;
        cin >> x;
        ar.push_back(x);
        if(x==0) cnt++;
        if(x==1)d++;
    }
    cout<<(1LL<<cnt)*d<<endl;
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
