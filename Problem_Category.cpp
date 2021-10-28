#include <bits/stdc++.h>
using namespace std;
#define long long int

void solve()
{
    int n;
    cin >> n;
    // vector<int> ar(n);
    // for (auto c : ar)
    // {
    //     int x;
    //     cin >> x;
    //     ar.push_back(x);
    // }
    if(n<100 && n>=1) cout<<"EASY"<<endl;
    else if(n>=100 && n<200) cout<<"MEDIUM"<<endl;
    if(n>=200 && n<=300) cout<<"HARD"<<endl;
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
