/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        int lind=n-1;
        
        for( int i=n-1 ; i>=0 ; i--){
            if(i+nums[i]>=lind)
                lind=i;
        }
        return lind==0;
        
    }
};
// @lc code=end

