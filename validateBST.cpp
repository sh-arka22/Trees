class Solution {
private:
    bool validate(TreeNode* root, long leftMax, long rightMax){
        if(!root) return 1;
        if(root->val>=rightMax or root->val<=leftMax) return 0;
        return validate(root->left, leftMax, root->val) and validate(root->right, root->val, rightMax);
    }
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};