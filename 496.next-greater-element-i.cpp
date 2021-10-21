/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> ans;
        int n = nums2.size();
        map<int, int> m;

        for (int i = 0; i < nums2.size(); i++)
        {
            m[nums2[i]] = i;
        }

        for (auto c : nums1)
        {
            int i = m[c];
            bool flag = false;
            for (; i < n; i++)
            {

                if (nums2[i] > nums2[m[c]])
                {
                    ans.push_back(nums2[i]);
                    flag = true;
                    break;
                }
            }
            if (!flag)
                ans.push_back(-1);
        }
        return ans;
    }
};
// @lc code=end

// @lc code=end
