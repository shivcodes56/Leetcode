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
int checkHeight(TreeNode*node){
            if(node==NULL){
                return 0;
            }
            int left=checkHeight(node->left);
            if(left==-1){
                return -1;
            }
            int right=checkHeight(node->right);
            if(right==-1){   // if it finds it is unbalanced 
                return -1;
            }
            int diff=abs(right-left);
            if(diff>1){
                return -1;
            }else{
                return max(left,right)+1;
            }
        }

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        if(checkHeight(root)==-1){
            return false;
        }else{
            return true;
        }
        
      
        
    }
};