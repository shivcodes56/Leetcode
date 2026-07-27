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
TreeNode*solve(TreeNode*root,int val){
    if(root==NULL){
        return NULL;
    }
    TreeNode*node=root;
    if(val<node->val){
        return solve(node->left,val);
    }
    if(val>node->val){
        return solve(node->right,val);
    }
    if(val==node->val){
        return node;
    }
    return NULL;
}
    TreeNode* searchBST(TreeNode* root, int val) {
        return solve(root,val);
    }
};