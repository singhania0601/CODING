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
    vector<int> ans;

    
    vector<int> preorderTraversal(TreeNode* node) {
        if(!node) return ans;
        ans.push_back(node->val);
        preorderTraversal(node->left);
        preorderTraversal(node->right);
        return ans;
    }
};