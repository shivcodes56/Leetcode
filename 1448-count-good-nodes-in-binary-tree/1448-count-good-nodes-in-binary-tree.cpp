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
int findpath(TreeNode*node,int maxpath){
    if(node==NULL){
        return 0;
    }
    int count=0;
    if(node->val>=maxpath){
        count=1;
    }
    maxpath=max(node->val,maxpath);
    count=count+findpath(node->left,maxpath);
    count=count+findpath(node->right,maxpath);
    return count;
}
    int goodNodes(TreeNode* root) {
      return findpath(root,root->val);
        
    }
};