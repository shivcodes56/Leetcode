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
        if(root==NULL){
            return NULL;
        }
        TreeNode*node=root;
        if(node->left!=NULL || node->right==NULL||node->left==NULL ||node->right!=NULL){
            swap(node->left,node->right);
        }
        invertTree(node->left);
        invertTree(node->right);
        return node;
    }
};