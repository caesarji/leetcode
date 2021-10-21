/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &t)
    {
        int n = t.size();
        int dp[n][n];
        memset(dp , 10005 , sizeof(dp));
        for (int i = 0; i < n; i++)
        {
            int m = t[i].size();
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    dp[i][j] = (i >= 1) ? dp[i-1][j] + t[i][j] : t[i][j];
                }
                if (j == m - 1 && i>=1 && j>=1)
                {
                    dp[i][j] = dp[i - 1][j - 1] + t[i][j];
                }
                if(i>=1 && j>=1){

                    dp[i][j] = min( dp[i-1][j],  dp[i-1][j-1] ) +t[i][j];
                }
            }
        }
        int mn=INT_MAX;
        
        for( int j=0 ; j<t[n-1].size() ; j++){
            mn=min(mn , dp[n-1][j]);
        }
        
        return mn;
    }
};
// @lc code=end
