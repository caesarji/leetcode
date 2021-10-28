class Solution {
public:
    int dp[2005][25];
    int n;
    int ok(vector<int>& nums, int  t , int i , int sum){
        if(i==n && t==sum)return 1;
        else if(i==n && t!=sum) return 0 ;
        
        if(dp[sum+1000][i]!=-1) {
            cout<<"here "<< sum<<" "<<i+1<<endl;
            return dp[sum+1000][i];  
            
        }
        int ans=ok(nums , t  , i+1 , sum+ nums[i]) + ok(nums , t , i+1 , sum -nums[i]);
        return dp[sum+1000][i]=ans;
    }
    
    int findTargetSumWays(vector<int>& nums, int t) {
        memset(dp , -1 , sizeof(dp));
        n=nums.size();
        
        return ok(nums , t ,  0, 0);
        
        
    }
};