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
int currdiameter=0;
int finddiameter(TreeNode*node){
    if(node==NULL){
        return 0;
    }
    int left=finddiameter(node->left);
    int right=finddiameter(node->right);
    if(left+right>currdiameter){
        currdiameter=left+right;
    }
    return max(left,right)+1;
   
}
    int diameterOfBinaryTree(TreeNode* root) {
        finddiameter(root);
        return currdiameter;
        
    }
};