class Solution {
public:
    TreeNode* prev = nullptr;

    bool isValidBST(TreeNode* root) {
        if (root == NULL)
            return true;

        if (!isValidBST(root->left))
            return false;

        if (prev != NULL && prev->val >= root->val)
            return false;

        prev = root;

        return isValidBST(root->right);
    }
};