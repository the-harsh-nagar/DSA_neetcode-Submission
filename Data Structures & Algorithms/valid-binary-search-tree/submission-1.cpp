class Solution {
public:
    TreeNode* prev = nullptr;

    bool isValidBST(TreeNode* root) {
        if (root == nullptr)
            return true;

        if (!isValidBST(root->left))
            return false;

        if (prev != nullptr && prev->val >= root->val)
            return false;

        prev = root;

        return isValidBST(root->right);
    }
};