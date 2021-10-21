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
        map<int, int> m;
        stack<int> st;

        for (auto c : nums2)
        {

            while (!st.empty() && st.top() < c)
            {
                m[st.top()] = c;
                st.pop();
            }
            st.push(c);
        }
        for (auto c : m)
        {
            cout << c.first << " " << c.second << endl;
        }
        vector<int> ans;
        for (auto c : nums1)
        {
            m.count(c) ? ans.push_back(m[c]) : ans.push_back(-1);
        }
        return ans;
    }
};
// @lc code=end
