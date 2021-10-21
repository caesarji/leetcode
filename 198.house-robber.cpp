/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution
{
public:
    int rob(vector<int> &nums)
    {

        int  n=nums.size();
        int dp[n];
        dp[0]=nums[0];
        if(n==1) return dp[n-1];
        dp[1]=max(nums[0] , nums[1]);
        if(n<=2) return dp[n-1];
        else{

            for( int i=2; i<n ; i++){
                dp[i]=max(dp[i-2]+nums[i] , dp[i-1]);
            }
        }
        return dp[n-1]; 
    }
};
// @lc code=end

// [1,2,3,1]
// [2,7,9,3,1]

// [ 2, 1, 1, 2 ]






