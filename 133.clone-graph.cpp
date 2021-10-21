/*
 * @lc app=leetcode id=133 lang=cpp
 *
 * [133] Clone Graph
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
public:
    Node *cloneGraph(Node *node)
    {
        if(node==NULL) return NULL; 

        queue<Node *> q;
        q.push(node);

        // vector<Node *> v = node->neighbors;
        map<Node *, Node *> m;
        Node *n = new Node(NULL);
        n->val = node->val;
        m[node] = n;

        while (!q.empty())
        {
            Node *x = q.front();
            q.pop();
            vector<Node *> v = x->neighbors;
            for (int i = 0; i < v.size(); i++)
            {
                // Node *y;
                if (m[v[i]] == NULL)
                {
                    Node *y = new Node();
                    y->val = v[i]->val;
                    m[v[i]] = y;
                    q.push(v[i]);
                }

                m[x]->neighbors.push_back(m[v[i]]);
            }
        }
        return m[node];
    }
};
// @lc code=end
