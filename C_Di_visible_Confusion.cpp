#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define aint(v) v.begin(), v.end()
#define fl(i, n) for (int i = 0; i < n; i++)
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
using std::cin;
using std::cout;
using std::vector;
using std::string;
// int M = 10e8 + 7;
const auto ready = []()
{
  cin.tie(0);
  std::ios_base::sync_with_stdio(false);
  return true;
}();

signed main()
{
    cin.tie(0);
    std::ios_base::sync_with_stdio(false);
    return true;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // list<int> l;
        std::list<int> l;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            l.pb(x);
        }
        while (l.size())
        {
            int in = l.size();
            bool fl = false;
            auto i = l.end();
            --i;
            for (; i != l.begin(); --i, --in)
            {
                if (*i % (in + 1))
                {
                    l.erase(i);
                    fl = true;
                    break;
                }
            }
            if (!fl && (*i % (in + 1)))
            {
                l.erase(i);
                fl = true;
            }
            if (!fl)
                break;
        }
        if (l.size())
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}
