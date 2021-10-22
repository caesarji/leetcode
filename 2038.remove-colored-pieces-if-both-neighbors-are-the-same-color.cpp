/*
 * @lc app=leetcode id=2038 lang=cpp
 *
 * [2038] Remove Colored Pieces if Both Neighbors are the Same Color
 */

// @lc code=start
class Solution
{
public:
    bool winnerOfGame(string cl)
    {
        int n = cl.size();
        if (n < 2)
            return false;
        int l = 0;
        int h = 2;

        int a = 0, b = 0;
        while (h < n)
        {

            if (cl.substr(l, 3) == "AAA")
                a++;
            if (cl.substr(l, 3) == "BBB")
                b++;
            l++;
            h++;
        }
        if (a > b)
            return true;
        else
            return false;
    }
};
// @lc code=end
