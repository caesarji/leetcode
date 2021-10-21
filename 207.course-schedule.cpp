/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
 */

// @lc code=start
class Solution
{
public:
    vector<int> adj[1000005];
    bool cycle(int v, vector<bool> &vis, vector<bool> rec)
    {
        
        if (vis[v] == false)
        {
            vis[v] = true;
            rec[v] = true;

            for (auto c : adj[v])
            {
                if (!vis[c] && cycle(c, vis, rec))
                    return true;
                else if (rec[c])
                    return true;
            }
        }
        rec[v]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>> &p)
    {
        for (int i = 0; i < n; i++)
        adj[i].clear();

        for (auto c : p)
        {
            adj[c[1]].push_back(c[0]);
        }

        vector<bool> vis(n, false);
        vector<bool> rec(n, false);

        for (int i = 0; i < n; i++)
        {
            if (cycle(i, vis, rec))
                return false;
           
        }
        return true;
    }
};
// @lc code=end
