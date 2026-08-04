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
vector<int>nums;
void solve(TreeNode*node){
    if(node==NULL){
        return;
    }
    solve(node->left);
    nums.push_back(node->val);
    solve(node->right);   // so this is the inorder traversal this given sorted 

}
    int kthSmallest(TreeNode* root, int k) {
        solve(root);
        return nums[k-1];
    }
};