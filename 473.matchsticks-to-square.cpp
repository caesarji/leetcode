/*
 * @lc app=leetcode id=473 lang=cpp
 *
 * [473] Matchsticks to Square
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution
{
public:
    map<vector<int>, bool> mm;
    bool help(vector<int> &m, int i, vector<int> &s)
    {
        if (i == m.size() && s[0] == 0 && s[1] == 0 && s[2] == 0 && s[3] == 0)
            return true;

        for (int j = 0; j < 4; j++)
        {
            if (m[i] > s[j])
                continue;
            s[j] -= m[i];
            vector<int> v = {s[0], s[1], s[2], s[3]};
            sort(v.begin(), v.end());
            if (mm.find(v) != mm.end())
                return mm[v];
            else if (help(m, i + 1, s))
            {
                mm[v] = true;
                return true;
            }
            s[j] += m[i];
            v = {s[0], s[1], s[2], s[3]};
            sort(v.begin(), v.end());
            mm[v] = false;
        }
        return false;
    }

    bool makesquare(vector<int> &m)
    {
        mm.clear();
        int n = m.size();
        if (n < 4)
            return false;
        int sum = 0;
        for (auto c : m)
            sum += c;
        if (sum % 4 != 0)
            return false;
        for (auto c : m)
        {
            if (c > sum / 4)
                return false;
        }

        vector<int> s(4, sum / 4);
        if (help(m, 0, s))
            return true;
        return false;
    }
};

// @lc code=end
