#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000000 + 7
#define ll long long
#define ld long double
#define MAXN 10e7

void init_code()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    // init_code();
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        vector<int> bits(21, 0);
        int mx = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            int v = (int)log2(x);
            mx = max(mx, v);
            bits[v] += 1;
        }

        1 2 8 4 8
        8 8 4 2 1
        
        3 3 
        2 
        1 1

        int total = n;
        int h = 1;
        for (; total > 0; ++h)
        {
            int size = w;

            for (int j = mx; j >= 0 && size > 0;)
            {
                if (bits[j] > 0)
                {
                    if ((1 << j) <= size)
                    {
                        bits[j] -= 1;
                        total -= 1;
                        size -= (1 << j);
                    }
                    else
                    {
                        j -= 1;
                    }
                }
                else
                {
                    j -= 1;
                }
            }
        }

        cout << h - 1 << "\n";
    }

    return 0;
}