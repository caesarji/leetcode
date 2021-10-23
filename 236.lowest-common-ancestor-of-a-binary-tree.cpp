/*
 * @lc app=leetcode id=236 lang=cpp
 *
 * [236] Lowest Common Ancestor of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    map<int, TreeNode *> m;
    int level(TreeNode *root, TreeNode *node, int l)
    {
        if (root == NULL)
            return 0;
        if (root == node)
            return l;
        int left = level(root->left, node, l + 1);
        int right = level(root->right, node, l + 1);

        if (left)
            return left;
        if (right)
            return right;
        return 0;
    }

    void dfs(TreeNode *node, TreeNode *par, vector<vector<int>> &lca)
    {
        lca[node->val + 10000][0] = par->val;
        if (m.find(node->val) == m.end())
            m[node->val] = node;

        if (node->left)
            dfs(node->left, node, lca);
        if (node->right)
            dfs(node->right, node, lca);
    }
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {

        vector<vector<int>> lca(105, vector<int>(6, -1));
        TreeNode *t = new TreeNode(-1);
            cout << "here" << endl;
        dfs(root, t, lca);
        cout << "here" << endl;

        for (int j = 1; j < 6; j++)
        {
            for (int i = 0; i < 105; i++)
            {
                if (lca[i + 10000][j - 1] != -1)
                {
                    int par = lca[i + 10000][j - 1];
                    lca[i + 10000][j] = lca[par + 10000][j - 1];
                }
            }
        }
        cout << "here" << endl;
        // for (auto c : lca)
        // {
        //     for (auto d : c)
        //     {
        //         cout << d << " ";
        //     }
        //     cout << endl;
        // }
        int pl = level(root, p, 0);
        int ql = level(root, q, 0);
        cout << pl << " " << ql << endl;
        if (pl < ql)
        {
            TreeNode *temp = new TreeNode();
            temp = p;
            p = q;
            q = temp;
            swap(pl, ql);
        }
        cout << p->val << " ";
        cout << q->val << endl;
        int d = pl - ql;
        while (d > 0)
        {
            int x = log(d);
            p->val = lca[p->val + 10000][x];
            d -= (1 << x);
        }
        cout << p->val << " ";
        cout << q->val << endl;
        while (p->val != q->val)
        {
            p->val = lca[p->val + 10000][0];
            q->val = lca[q->val + 10000][0];
        }
        cout << p->val << endl;
        cout << m[p->val + 10000];
        return m[p->val];
        // return p;
    }
};
// @lc code=end
