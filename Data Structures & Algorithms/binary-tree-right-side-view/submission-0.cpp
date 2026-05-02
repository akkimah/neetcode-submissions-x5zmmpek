/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rt;
        queue<TreeNode*> q;
        q.push(root);
   
        while(!q.empty())
        {
                        TreeNode* rightSide = nullptr;

                 int n=q.size();
            for(int i=0;i<n;i++)
            {
               TreeNode* node =q.front();
               q.pop();
               if(node)
               {
                rightSide=node;
                q.push(node->left);
                q.push(node->right);
               }
            }
            if(rightSide)
            {
                rt.push_back(rightSide->val);
            }
        }
        return rt;

    }
};
