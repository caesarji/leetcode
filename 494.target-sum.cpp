/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution
{
public:
    int cnt;
    int n;
    void help(vector<int> &nums, int ind, int sum, int t)
    {
        if (ind == n && sum == t)
        {
            cnt++;
        }
        if (ind >= n)
            return;
        help(nums, ind + 1, sum + nums[ind], t);
        help(nums, ind + 1, sum - nums[ind], t);
    }
    int findTargetSumWays(vector<int> &nums, int t)
    {
        n = nums.size();
        cnt = 0;
        help(nums, 0, 0, t);
        return cnt;
    }
};
// @lc code=end
