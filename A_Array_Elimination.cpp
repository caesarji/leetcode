#include <bits/stdc++.h>
using namespace std;
void store(int v[], int a)
{
    int i = 0;
    while (a)
    {
        if (a % 2)
        {
            v[i]++;
        }
        a /= 2;
        i++;
    }
}
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[32] = {0};
        for (int h = 0; h < n; h++)
        {
            int a;
            cin >> a;
            store(v, a);
        }
        int g = 0;
        for (int h = 0; h < 32; h++)
        {
            g = gcd(g, v[h]);
        }
        // cout<<g<<endl;
        vector<int> ans;
        for (int h = 1; h * h <= g; h++)
        {
            // cout<<h<<endl;
            if (g % h == 0 and h * h != g)
            {
                ans.push_back(h);
                ans.push_back(g / h);
            }
            else if (h * h == g)
            {
                ans.push_back(h);
            }
        }
        if (g == 0)
        {
            for (int h = 1; h <= n; h++)
            {
                cout << h << " ";
            }
            cout << endl;
            continue;
        }
        sort(ans.begin(), ans.end());
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}