/*
 * @lc app=leetcode id=154 lang=cpp
 *
 * [154] Find Minimum in Rotated Sorted Array II
 */

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0;
        int n = nums.size();
        int h = n - 1;
        if(nums[l]<nums[h]) return nums[l];
        while(l<h){
            int mid=l+(h-l)/2;
            if(nums[mid]<nums[h]){
                h=mid;
            }
            else if(nums[mid]>nums[h]){
                l=mid+1;
            }
            else{
                h--;
            }
        }
        cout<<l<<" "<<h<<endl;
        return nums[h];
    }
};
// @lc code=end
