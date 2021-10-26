#include <bits/stdc++.h>
using namespace std;
struct res
{
    int a, b, c;
};
void solve()
{
    int n, m;
    cin >> n >> m;
    res rest[m];
    int k = 0;
    set<int> set;
    while (k < m)
    {
        cin >> rest[k].a >> rest[k].b >> rest[k].c;
        set.insert(rest[k].b);
        k++;
    }
    int i;
    for (i = 1; i <= n; i++)
    {
        if (set.find(i) == set.end())
            break;
    }
    for( int j=1 ; j<=n ; j++){
        if(i==j) continue;
        else{
            cout<<i<<" "<<j<<endl;
        }
    }

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
