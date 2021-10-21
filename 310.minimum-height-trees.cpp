/*
 * @lc app=leetcode id=310 lang=cpp
 *
 * [310] Minimum Height Trees
 */

// @lc code=start
class Solution
{
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>> &e)
    {
        vector<int> ans;
        if (n == 0)
            return ans;
        if (n == 1)
        {
            ans.push_back(0);
            return ans;
        }

        int de[n];
        for (int i = 0; i < n; i++)
            de[i] = 0;
        vector<vector<int>> adj(n);
        for (auto c : e)
        {
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
            de[c[0]]++;
            de[c[1]]++;
        }

        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (de[i] == 1)
                q.push(i);
        }
        while (n > 2)
        {
            int s = q.size();
            n -= s;

            while (s--)
            {
                int t = q.front();
                q.pop();
                for (auto c : adj[t])
                {
                    de[c]--;
                    if (de[c] == 1)
                        q.push(c);
                }
            }
        }
        while (!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};
// @lc code=end
