/*
 * @lc app=leetcode id=1318 lang=cpp
 *
 * [1318] Minimum Flips to Make a OR b Equal to c
 */

// @lc code=start
class Solution
{
public:
    int minFlips(int a, int b, int c)
    {

        int cnt = 0;
        for (int i = 0; i < 32; i++)
        {

            if (c & (1 << i))
            {
                if (!(a & (1 << i)) && !(b & (1 << i)))
                {
                    cnt++;
                }
            }
            else
            {
                if ((a & (1 << i)))
                {
                    cnt++;
                }
                if ((b & (1 << i)))
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
// @lc code=end


// 2  10 
// 6 110

// 5 101