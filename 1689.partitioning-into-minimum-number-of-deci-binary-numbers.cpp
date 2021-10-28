/*
 * @lc app=leetcode id=1689 lang=cpp
 *
 * [1689] Partitioning Into Minimum Number Of Deci-Binary Numbers
 */

// @lc code=start
class Solution {
public:
    int minPartitions(string n) {
        int mx=INT_MIN;
        for( auto c:n){
            mx=max(mx , c-'0');
        }
        return mx;
        
    }
};
// @lc code=end

