/*
 * @lc app=leetcode id=722 lang=cpp
 *
 * [722] Remove Comments
 */

// @lc code=start
class Solution
{
public:
    vector<string> removeComments(vector<string> &s)
    {
        string str = "";
        // vector<string> ss;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i].size() >= 2 && s[i][0] == '/' && s[i][1] == '/')
                continue;
            else
                str += s[i];
        }
        cout<<str;
        return s;
    }
};
// @lc code=end
