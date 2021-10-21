/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            
            if(arr[abs(arr[i])-1]>0)
                ans.push_back(abs(arr[i]));
        }
        
        
        return ans;
    }
};
// @lc code=end

-4,+3,+2,-7,8,2,-3,-1
3 2