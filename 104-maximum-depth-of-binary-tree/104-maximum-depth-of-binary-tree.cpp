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
    int maxDepth(TreeNode* root) {
         if (!root)
			return 0;
        int nLeftDeep = 1;
        int nRightDeep = 1;
        if (root->left)
            nLeftDeep = nLeftDeep + maxDepth(root->left);
        if (root->right)
            nRightDeep = nRightDeep + maxDepth(root->right);
        if (nLeftDeep > nRightDeep)
            return nLeftDeep;
        else
            return nRightDeep;
        
    }
};