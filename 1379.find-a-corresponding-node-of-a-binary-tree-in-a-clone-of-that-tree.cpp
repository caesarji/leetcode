/*
 * @lc app=leetcode id=1379 lang=cpp
 *
 * [1379] Find a Corresponding Node of a Binary Tree in a Clone of That Tree
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
    TreeNode *getTargetCopy(TreeNode *o, TreeNode *c, TreeNode *t)
    {

        if(o==NULL) return NULL;
        if(o==t){
            return c;
        }

        TreeNode * l=getTargetCopy(o->left , c->left , t);
        TreeNode * r=getTargetCopy(o->right , c->right , t);
        if(l) return l ;
        if(r) return r ;
        return NULL;
    }
};
// @lc code=end
