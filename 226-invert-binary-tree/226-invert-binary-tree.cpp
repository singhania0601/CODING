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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* temp;
        if(root == NULL ) return root;
        if(root != NULL)
        {
            invertTree(root->left);
            invertTree(root->right);
            temp = root->left;
            root->left = root->right;
            root->right = temp;
         
        }
        
        return root;
    }
};