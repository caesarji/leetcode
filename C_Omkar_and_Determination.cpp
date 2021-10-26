#include <bits/stdc++.h>
using namespace std;

int dp[1000005][1000005];
void solve(vector<vector<char>> &v, int n, vector<vector<bool>> &ans)
{
    int x1, x2;
    cin >> x1 >> x2;

    if(dp[x1][x2]==1) {
        cout<<"NO"<<endl;
        return;
    } 
    for (int i = 1; i < n; i++)
    {
        for (int j = x1; j < x2; j++)
        {
            // cout<<v[i][j]<< v[i-1][j] << v[i][j-1];
            // cout<<v[i][j];
            if (v[i][j] == '.' && v[i - 1][j] == 'X' && v[i][j - 1] == 'X')
            {
                cout << "NO" << endl;
                dp[x1][x2] = 1;
                for (int i = 0; i < x1; i++)
                {
                    for (int j = x2 + 1; j < n; j++)
                    {
                        dp[i][j] = 1;
                    }
                }
                return;
            }
        }
        // cout<<endl;
    }
    cout << "YES" << endl;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    int t = 1;
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n);
    vector<vector<bool>> ans(n, vector<bool>(n, true));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            v[i].push_back(ch);
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            // cout<<v[i][j]<< v[i-1][j] << v[i][j-1];
            // cout<<v[i][j];
            if (v[i][j] == '.' && v[i - 1][j] == 'X' && v[i][j - 1] == 'X')
            {
                ans[i][j] = false;
                cout << "NO" << endl;
                return;
            }
        }
        // cout<<endl;
    }
    cin >> t;
    int k = 1;

    while (t--)
    {
        // cout<<k++<<endl;
        solve(v, n, ans);
    }
}

// ..XXX
// ...X.
// ...X.
// ...X.