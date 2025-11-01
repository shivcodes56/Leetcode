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
bool findpath(TreeNode*node, int sum,int targetSum){
    if(node==NULL){
        return false;
    }
    if(node->left==NULL && node->right==NULL){
        return (sum+node->val==targetSum);
    }
  sum=sum+node->val;
    bool left=findpath(node->left,sum,targetSum);
    bool right=findpath(node->right,sum,targetSum);
    return left||right;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return findpath(root,sum,targetSum);
        
    }
};