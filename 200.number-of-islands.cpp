/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
class Solution {
    bool visited[305][305];
    int dx[4] ={1,-1,0,0};
    int dy[4] ={0,0,-1,1};
    
    bool valid(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j >=grid[0].size())
            return false;
        if(visited[i][j] || grid[i][j]=='0')
            return false;
        
        return true;
    }
    
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        visited[i][j] = true;
        
        for(int k=0;k<4;k++)
        {
            if(valid(grid,i+dx[k],j+dy[k])){
                
                //visited[i+dx[k]][j+dy[k]] = true;
                dfs(grid,i+dx[k],j+dy[k]);
            }
        }
        
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        if(n==0 || m==0)
            return 0;
        
        int islands =0;
        
        memset(visited,false,sizeof(visited));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    //visited[i][j] = true;
                    dfs(grid,i,j);
                    islands++;
                }
            }
        }
        
        return islands;
    }
};
// @lc code=end

