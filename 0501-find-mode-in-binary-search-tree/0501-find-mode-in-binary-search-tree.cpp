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
void findpath(TreeNode*node,TreeNode*&prev,int &count,int &maxcount, vector<int>&modes){
    if(node==NULL){
        return;
    }
    findpath(node->left,prev,count,maxcount,modes);
    if( prev!=NULL && node->val==prev->val){
        count++;
    }else{
        count=1;
    }
    if(count>maxcount){
        maxcount=count;
        modes.clear();
        modes.push_back(node->val);
    }else if(count==maxcount){
        modes.push_back(node->val);
    }
      prev=node;
      findpath(node->right,prev,count,maxcount,modes);
}
    vector<int> findMode(TreeNode* root) {
       TreeNode*prev=NULL;
        int count=0;
        int maxcount=0;
        vector<int>modes={};
        findpath(root,prev,count,maxcount,modes);
        return modes;
        
    }
};