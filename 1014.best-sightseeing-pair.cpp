/*
 * @lc app=leetcode id=1014 lang=cpp
 *
 * [1014] Best Sightseeing Pair
 */

// @lc code=start
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int lmax=INT_MIN;
        int gmax=INT_MIN;
        int n=v.size();

        for( int i=1 ; i<n ; i++){

            lmax=max(lmax , v[i-1]+(i-1));
            gmax= max(gmax , lmax+  v[i]-i);
        }
        return gmax;
        
    }
};
// @lc code=end

