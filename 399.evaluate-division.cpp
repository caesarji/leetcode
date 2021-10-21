/*
 * @lc app=leetcode id=399 lang=cpp
 *
 * [399] Evaluate Division
 */

// @lc code=start
class Solution
{
public:
    unordered_map<string, multiset<pair<string, double>>> buildGraph(vector<vector<string>> e, vector<double> v)
    {
        unordered_map<string, multiset<pair<string, double>>> adj;
        for (int i = 0; i < e.size(); i++)
        {
            // cout<<v[i]<<endl;
            adj[e[i][0]].insert({e[i][1], v[i]});
            adj[e[i][1]].insert({e[i][0], 1.0 / v[i]});
        }
        return adj;
    }
    double dfs(string s, string d, unordered_map<string, multiset<pair<string, double>>> adj, map<string, bool> &vis)
    {
        vis[s] = true;
        if (s == d)
            return 1.00000;
        for (auto c : adj[s])
        {
            if (!vis[c.first] && c.first == d)
                return c.second;
        }
        double ans = -1.00000;
        for (auto c : adj[s])
        {
            if (!vis[c.first])
            {
                double temp = dfs(s, c.first, adj, vis) * dfs(c.first, d, adj, vis);
                if (temp != -1)
                    ans = abs(ans) * temp;
            }
        }
        if (ans == -1)
            return -1;
        return ans;
    }
    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &q)
    {

        unordered_map<string, multiset<pair<string, double>>> adj = buildGraph(equations, values);
        // for (auto c : adj)
        // {
        //     cout<<c.first<<endl;
        //     for (auto p : c.second)
        //     {
        //         cout<<p.first<<" "<<p.second<<endl;
        //     }
        //     cout<<"-------------"<<endl;
        // }

        set<string> s;
        for (auto c : equations)
        {
            s.insert(c[0]);
            s.insert(c[1]);
        }
        vector<double> ans;
        map<string, bool> vis(s.size());

        for (auto c : s)
        {
            vis[c] = false;
        }
        for (int i = 0; i < q.size(); i++)
        {
            if (s.find(q[i][0]) == s.end() || s.find(q[i][1]) == s.end())
                ans.push_back(-1.00000);
            else
            {
                ans.push_back(dfs(q[i][0], q[i][1], adj, vis));
            }
        }
        return ans;
    }
};
// @lc code=end
