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
int findpath(TreeNode*node,int currnumber){
    if(node==NULL){
        return 0;
    }
    currnumber=currnumber*10+node->val;
    int left=  findpath(node->left,currnumber);
    int right= findpath(node->right,currnumber);
    if(node->left==NULL && node->right==NULL){
        return currnumber;
    }else{
        return left+right;
    }
   
}
    int sumNumbers(TreeNode* root) {
       return findpath(root,0);
    }
};