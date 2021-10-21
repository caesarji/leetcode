/*
 * @lc app=leetcode id=950 lang=cpp
 *
 * [950] Reveal Cards In Increasing Order
 */

// @lc code=start
class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> &d)
    {

        sort(d.begin(), d.end());
        queue<int> q;

        int n = d.size();
        scnekj;
        for (int i = 0; i < n; i++)
        {
            q.push(i);
        }
        vector<int> ans(n);
        int count = 0;
        int flip = 1;
        while (!q.empty())
        {
            if (flip)
            {
                ans[q.front()] = d[count++];
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
            flip ^= 1;
        }
        return ans;
    }
};
// @lc code=end
