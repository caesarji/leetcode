/*
 * @lc app=leetcode id=2044 lang=cpp
 *
 * [2044] Count Number of Maximum Bitwise-OR Subsets
 */

// @lc code=start
// class Solution
// {
// public:
//     int countMaxOrSubsets(vector<int> &nums)
//     {

//         int n = nums.size();
//         int mask = (1 << n) - 1;

//         // cout << mask << endl;
//         int mxor =0;
//         for( auto  c:nums){
//             mxor|=c;
//         }

//         // map<int, int> m;
//         int cnt=0;
//         for (int i = 0; i <= mask; i++)
//         {
//             int var = 0;
//             bool flag = false;
//             for (int j = 0; j < n; j++)
//             {

//                 if (i & (1 << j))
//                 {
//                     flag = true;
//                     cout << nums[j] << " ";
//                     var |= nums[j];
//                 }
//             }
//             if(var==mxor) cnt++;
//             // if (var != 0)
//             //     m[var]++;
//             // if (flag)
//             // {
//             //     // cout << "----" << var << endl;
//             //     // cout << "\n";
//             // }
//         }
//         // cout << endl;
//         // int ans;
//         // for (auto c : m)
//         // {
//         //     // cout << c.first << " " << c.second << endl;
//         //     ans = c.second;
//         // }

//         return cnt;
//     }
// };

// class Solution
// {
// public:
//     int countMaxOrSubsets(vector<int> &A)
//     {
//         int goal = 0, N = A.size(), ans = 0;
//         vector<int> dp(1 << N);
//         cout<<dp[0]<<endl;
//         for (int n : A)
//             goal |= n;
//         for (int m = 1; m < 1 << N; ++m)
//         {
//             int lowbit = m & -m;
//             dp[m] = dp[m - lowbit] | A[__builtin_ctz(lowbit)];
//             cout<<lowbit <<" "<< dp[m]<<endl;
//             if (dp[m] == goal)

//                 ++ans;
//         }
//         return ans;
//     }
// };

//method 1 Recursive
class Solution {
public:
    unordered_map<int,int> mp;
    //TC O(2^n) 
    //SC O(2^n)
    void helper(int idx,int OR,vector<int>& nums){
        if(idx==nums.size()){
            mp[OR]++;
            return;
        }
        //two option 
        int taken=OR|nums[idx];
        helper(idx+1,taken,nums);
        
        int leave=OR;
        helper(idx+1,leave,nums);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        helper(0,0,nums);
        int mx=0,ans=0;
        for(auto x:mp){
            if(x.first>mx){
                mx=x.first,ans=x.second;
            }
        }
        return ans;
    }
};

//Method 2: Iterative
// class Solution {
// public:
// //TC O(2^n) //SC O(2^n)
//     unordered_map<int,int> mp;
//     int countMaxOrSubsets(vector<int>& nums) {
//         vector<int> v{0};
//         for(int i=0;i<nums.size();i++){
//             int p=v.size();
//             for(int j=0;j<p;j++){
//                 int d=v[j]|nums[i];
//                 v.push_back(d);mp[d]++;
//             }
//         }
//         int mx=0,ans=0;
//         for(auto x:mp){
//             if(x.first>mx){
//                 mx=x.first,ans=x.second;
//             }
//         }
//         return ans;
//     }
// };


// @lc code=end
// [3 ,2 , 1 ,5]
