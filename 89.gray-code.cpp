/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution
{
public:
    vector<int> grayCode(int n)
    {
        vector<int> ans;
        if (n == 1)
        {
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        }
        else
        {

            vector<int> temp;
            temp = grayCode(n - 1);
            int size = temp.size();

            for (auto c : temp)
            {
                ans.push_back(c);
            }
            cout << "here" << endl;
            bool flag = false;
            int bit = 0;
            for (int i = size - 1; i >= 0; i--)
            {
                int x = temp[i];
                if (!flag)
                {
                    while (x > 0)
                    {
                        x /= 2;
                        bit++;
                        flag = true;
                    }
                    if (!bit)
                        bit++;
                }
                cout << temp[i] << " " << bit << " " << (1 << bit) << endl;
                // bit++;
                // if(!bit) bit++;
                ans.push_back(temp[i] + (1 << bit));
            }
        }
        cout << "here" << endl;
        return ans;
    }
};

// @lc code=end
