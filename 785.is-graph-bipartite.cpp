/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution
{

    bool dfs(vector<vector<int>> &graph, bool visited[], bool color[], int s, int col)
    {
        visited[s] = true;
        color[s] = col;

        // if(graph[s].size()==0)
        //     return false;
        for (int child : graph[s])
        {
            if (!visited[child])
            {
                if (dfs(graph, visited, color, child, col ^ 1) == false)
                    return false;
            }

            if (color[s] == color[child])
                return false;
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>> &graph)
    {

        int n = graph.size();

        bool visited[n + 1], col[n + 1];
        memset(visited, false, sizeof(visited));

        return dfs(graph, visited, col, 0, 0);
    }
};
// @lc code=end
// class Solution
// {
// public:
//     bool isBipartite(vector<vector<int>> &graph)
//     {
//         int n = graph.size();
//         vector<int> colour(n, 0);
//         for (int i = 0; i < n; i++)
//         {
//             if (colour[i] == 0)
//             {
//                 colour[i] = -1;
//                 queue<int> q;
//                 q.push(i);
//                 while (!q.empty())
//                 {
//                     int x = q.front();
//                     q.pop();
//                     for (auto it : graph[x])
//                     {
//                         if (colour[it] == colour[x])
//                         {
//                             return false;
//                         }
//                         else if (colour[it] == 0)
//                         {
//                             colour[it] = -colour[x];
//                             q.push(it);
//                         }
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };