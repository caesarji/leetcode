/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {

        int n = nums.size();
        if(n<=1)
            return 0;

        int max_Reach = nums[0],step = nums[0],jump=1;  

        int i=1;
        for( i=1;i<n;i++)
        {
            if(i==n-1)
                return jump;

            max_Reach = max(max_Reach,i+nums[i]);
            cout << max_Reach << endl;
            step--;

            if(step==0)
            {
                jump++;

                if(i>=max_Reach)
                    return -1;

                step = max_Reach-i;

                cout << "steps" << i << endl;
            }
        }


        return -1;

    }
};
// @lc code=end

2,3,1,1,4
max_Reach

