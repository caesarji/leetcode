/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution
{
public:
    int dp[2005][25];
    int n;
    int helper(vector<int> &nums, int t, int i, int sum)
    {
        int ans;
        if (i == n && sum == t)
            return 1;
        else if (i == n && sum != t)
            return 0;

        if (dp[sum + 1000][i] != -1)
            return dp[sum + 1000][i];
        ans = helper(nums, t, i + 1, sum + nums[i]) + helper(nums, t, i + 1, sum - nums[i]);
        return dp[sum + 1000][i] = ans;
    }
    int findTargetSumWays(vector<int> &nums, int t)
    {
        n = nums.size();
        memset(dp, -1, sizeof(dp));
        return helper(nums, t, 0, 0);
    }
};
// @lc code=end
