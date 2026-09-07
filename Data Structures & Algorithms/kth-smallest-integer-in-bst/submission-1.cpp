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
    int ans;
    int count;

    void traversal(TreeNode* root, int k){

        if(root == nullptr) return;
        traversal(root->left,k);
        count ++;
        if(k == count){
            ans = root->val;
            return;
        } 
        traversal(root->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        ans = 0;
        count = 0;
        traversal(root,k);
        return ans;
    }
};