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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>result;   // stores the final level order traversal from bottom to up--->multiple values its storing so vector<vector<int>>result;
        if(root==NULL){       // base case again 
            return {};
        }
        queue<TreeNode*>que;     //queue is made TreeNode* because in the queue we are actually storing the node values of the tree not the actual value
        que.push(root);      // first step is to push the root in the queue thats the first step
        while(!que.empty()){     // now this whole process will only end when the queue becomes empty 
            int size=que.size();     // because we have to know the size at each level right so thats why we loop till size at each level 
            vector<int>level;
            for(int i=0;i<size;i++){
            TreeNode*node=que.front();
            if(node->left!=NULL){
                que.push(node->left);
            }
            if(node->right!=NULL){
                que.push(node->right);
            }
            que.pop();
            level.push_back(node->val);    
            }               // here for loop ended 
               result.push_back(level);
        }    // here while loop is done that means queue has become empty so I can actually push my level into result vector 
          
        reverse(result.begin(),result.end());    //because question is asking bottom to top level order traversal 
        return result;
    }
};