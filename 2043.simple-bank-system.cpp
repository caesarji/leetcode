/*
 * @lc app=leetcode id=2043 lang=cpp
 *
 * [2043] Simple Bank System
 */

// @lc code=start
class Bank
{
public:
    int n;
    vector<long long> balance;
    Bank(vector<long long> &b)
    {
        for (auto c : b)
        {
            balance.push_back(c);
        }
        n = balance.size();
    }

    bool transfer(int a1, int a2, long long m)
    {

        if (a1 > n || a2 > n)
            return false;
        if (balance[a1 - 1] < m)
            return false;

        else
        {

            balance[a2 - 1] += m;
            balance[a1 - 1] -= m;
        }
        return true;
    }

    bool deposit(int ac, long long m)
    {
        if (ac > n)
            return false;
        balance[ac - 1] += m;
        return true;
    }

    bool withdraw(int ac, long long m)
    {
        if (ac > n)
            return false;
        if (balance[ac - 1] < m)
            return false;
        balance[ac - 1] -= m;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
// @lc code=end
