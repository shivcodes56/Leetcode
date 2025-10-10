/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void parentmp(TreeNode*node,unordered_map<TreeNode*,TreeNode*>&parent){
        if(node==NULL){
            return;
        }
        if(node->left){
            parent[node->left]=node;// set the parent of the left node as the current node.
        }
        parentmp(node->left,parent);
        if(node->right){
            parent[node->right]=node;
        }
        parentmp(node->right,parent);
}
void dfs(TreeNode*node,int distance,int k,unordered_map<TreeNode*,TreeNode*>&parent,unordered_set<TreeNode*>&visited,vector<int>&result){
    if(node==NULL|| visited.count(node)){
        return;
    }
    visited.insert(node);
    if(distance==k){
        result.push_back(node->val);   
        return;   // to stop going deeper in the recursive function 
    }
    dfs(node->left,distance+1,k,parent,visited,result);
    dfs(node->right,distance+1,k,parent,visited,result);
    dfs(parent[node],distance+1,k,parent,visited,result);
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        parentmp(root,parent);
        unordered_set<TreeNode*>visited;
        vector<int>result;
        dfs(target,0,k,parent,visited,result);
        return result;
    }
};