// C++ program for printing vertical order
// of a given binary tree usin BFS.
#include <bits/stdc++.h>

using namespace std;

// Structure for a binary tree node
struct Node {
	int key;
	Node *left, *right;
};

// A utility function to create a new node
Node* newNode(int key)
{
	Node* node = new Node;
	node->key = key;
	node->left = node->right = NULL;
	return node;
}

vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        if(!root) return ans; 
        queue<pair<Node* , int>>q;
        q.push({root , 0});
        map<int, vector<Node*> >m;
        m[0].push_back(root);
        
        while(!q.empty()){
            auto t=q.front();
            q.pop();
            if(t.first->left!=NULL) {
                m[t.second-1].push_back(t.first->left);
                q.push({t.first->left , t.second-1});
            }
            if(t.first->right!=NULL){
                m[t.second+1].push_back(t.first->right);
            q.push({t.first->right , t.second+1});
            }
        }
        
        for(auto c:m){
            for( auto d:c.second){
                ans.push_back(d->key);
                cout<<d->key<<" ";
            }cout<<endl;
        }
        return ans;
    }
// Driver program to test above functions
int main()
{
	Node* root = newNode(2);
	// root->left = newNode(2);
	root->right = newNode(3);
	// root->left->left = newNode(4);
	// root->left->right = newNode(5);
	root->right->left = newNode(4);
	// root->right->right = newNode(7);
	// root->right->left->right = newNode(8);
	// root->right->right->right = newNode(9);
	// root->right->right->left = newNode(10);
	// root->right->right->left->right = newNode(11);
	// root->right->right->left->right->right = newNode(12);
	cout << "Vertical order traversal is \n";
	verticalOrder(root);
	return 0;
}
