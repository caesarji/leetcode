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

class Solution
{
public:
    int countMaxOrSubsets(vector<int> &A)
    {
        int goal = 0, N = A.size(), ans = 0;
        vector<int> dp(1 << N);
        cout<<dp[0]<<endl;
        for (int n : A)
            goal |= n;
        for (int m = 1; m < 1 << N; ++m)
        {
            int lowbit = m & -m;
            dp[m] = dp[m - lowbit] | A[__builtin_ctz(lowbit)];
            cout<<lowbit <<" "<< dp[m]<<endl;
            // cout<<endl;
            if (dp[m] == goal)
                ++ans;
        }
        return ans;
    }
};
// @lc code=end
// [3 ,2 , 1 ,5]
