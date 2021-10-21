/*
 * @lc app=leetcode id=210 lang=cpp
 *
 * [210] Course Schedule II
 */

// @lc code=start
class Solution
{
public:
    vector<int> adj[2005];
    bool vis[2005];
    bool rec[2005];
    stack<int> st;
    bool cycle(int i)
    {
            vis[i] = true;
            rec[i] = true;

            for (auto c : adj[i])
            {
                if (!vis[c] && cycle(c))
                    return true;
                else if (rec[c])
                    return true;
            }
        rec[i] = false;
        return false;
    }
    void dfs(int i)
    {
        vis[i] = true;
        for (auto c : adj[i])
        {
            if (!vis[c])
                dfs(c);
        }
        st.push(i);
    }
    vector<int> findOrder(int n, vector<vector<int>> &p)
    {
        cout << "here";
        for (int i = 0; i < n; i++)
            adj[i].clear();
        for (int i = 0; i < n; i++)
        {
            vis[i] = false;
            rec[i] = false;
        }
        for (int i = 0; i < p.size(); i++)
        {
            adj[p[i][1]].push_back(p[i][0]);
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (cycle(i))
                return v;
        }
        cout << "here";
        for (int i = 0; i < n; i++)
        {
            vis[i] = false;
        }
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        while (!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        return v;
    }
};
// @lc code=end
