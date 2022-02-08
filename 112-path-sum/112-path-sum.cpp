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
    int checkSum(TreeNode* root, int sum){
    if(root == NULL){
        return 0;
    }
    
    if(root->val == sum && root->left == NULL && root->right == NULL){
        return 1;
    }
    
    return max(checkSum(root->left, sum - root->val), checkSum(root->right, sum - root->val));
}
    
    bool hasPathSum(TreeNode* A, int B) {
         return checkSum(A, B);
        
        
    }
};