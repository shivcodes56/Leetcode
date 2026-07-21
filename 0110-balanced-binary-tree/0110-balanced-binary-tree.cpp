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
int solve(TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int left=solve(root->left);
    int right=solve(root->right);
    if(left==-1 || right==-1){   //major base case here 
        return -1;
    }
    if(abs(left-right)<=1){
        return max(left,right)+1;
    }
    return -1;   // means it is unbalanced
}
    bool isBalanced(TreeNode* root) {
      int ans=solve(root);
      if(ans==-1){
        return false;
      }
      return true;
    }
};