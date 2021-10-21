/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution
{
public:
    vector<int> grayCode(int n)
    {

        // obtaining ss as binary number string of n

        stringstream s;
        while (n > 0)
        {
            s << (n % 2);
            n /= 2;
        }
        string ss = "";
        string word;
        while (s >> word)
        {
            ss += word;
        }
        reverse(ss.begin(), ss.end());

        if (n == 1)
        {
            vector<int> ans(2);
            ans[0] = 0;
            ans[1] = 1;
            return ans;
        }

        vector<int> v = grayCode(n - 1);
        vector<int> ans;

        int siz = v.size();
        for (int i = 0; i < siz; i++)
        {
            ans.push_back(v[i]);
        }

        for (int i = siz - 1; i >= 0; i--)
        {
            int bsize = ss.size();
            while (bsize != (n - 1))
            {
                ss = "0" + ss;
            }
            ss = "1" + ss;
            cout << ss << endl;
        }
        return ans;
    }
};

// @lc code=end
