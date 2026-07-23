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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL){
            return {};
        }
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            int size=que.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode*node=que.front();
                level.push_back(node->val);
                if(node->left!=NULL){
                    que.push(node->left);
                }
                if(node->right!=NULL){
                    que.push(node->right);
                }
                que.pop();
            }
            result.push_back(level);
        }
       
        return result;
    }
};