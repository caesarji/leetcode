/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution
{
public:
    string reverseWords(string str)
    {

        stringstream s(str);
        string word;
        vector<string> c;
        while (s >> word)
        {
            c.push_back(word);
        }
        string ans = "";
        for (int i = c.size() - 1; i >= 0; i--)
        {
            ans += c[i];
            if (i != 0)
                ans += " ";
        }

        return ans;
    }
};
// @lc code=end
