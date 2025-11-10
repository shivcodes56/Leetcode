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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode*>q;
      vector<double>result;
        q.push(root);
        while(!q.empty()){
          int nodecnt= q.size();
          double sum=0;
          for(int i=0;i<nodecnt;i++){
            TreeNode*curr=q.front();
            q.pop();
            sum=sum+curr->val;
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
          }
          double avg=sum/nodecnt;
          result.push_back(avg);
        }
        return result;
    }   
};