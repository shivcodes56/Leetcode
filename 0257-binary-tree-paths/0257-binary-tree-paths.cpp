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
vector<string>result;
void solve(TreeNode*root,string path){
    if(root==NULL){
        return;
    }
    if(path== ""){
        path=to_string(root->val);
    }else{
        path+="->"+to_string(root->val);
    }
    if(root->left==NULL && root->right==NULL){
        result.push_back(path);
        return;
    }
    solve(root->left,path);
    solve(root->right,path);
}
    vector<string> binaryTreePaths(TreeNode* root) {
        string path="";
        solve(root,path);
        return result;
        
    }
};