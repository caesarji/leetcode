/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 */

// @lc code=start
class Solution
{
public:
    int n, m;
    int dy[4] = {0, 1, 0, -1};
    int dx[4] = {1, 0, -1, 0};
    bool valid(int i, int j)
    {
        if (i < 0 || j < 0 || i >= n || j >= m)
            return false;
        return true;
    }
    int count(int i, int j, vector<vector<int>> &grid)
    {
        int cnt = 0;

        for (int k = 0; k < 4; k++)
        {
            if (valid(i + dx[k], j + dy[k]) && grid[i + dx[k]][j + dy[k]] == 0)
            {
                cnt++;
            }
            if(!valid(i + dx[k], j + dy[k])) cnt++;
        }
        cout<<i+1<<" "<<j+1<<" "<<cnt<<endl;
        return cnt;
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {

        n = grid.size();
        m = grid[0].size();
        // cout<<n<<" "<<m<<endl;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    cnt += count(i, j, grid);
                }
            }
            // cout <<
        }
        return cnt;
    }
};
// @lc code=end

// [0, 1, 0, 0]
// [1, 1, 1, 0]
// [0, 1, 0, 0]
// [1, 1, 0, 0]



// 1 2 ====2
// 2 1 ====2
// 2 2 ====0
// 2 3 ====3
// 3 2 ====2
// 4 1 ====1
// 4 2 ====1