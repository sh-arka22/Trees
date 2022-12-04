vector<TreeNode *> ans;
bool flag(TreeNode *root, int tar){
    if (!root)
        return 0;
    if (root->val == tar){
        ans.push_back(root);
        return true;
    }
    if (flag(root->left, tar)){
        ans.push_back(root);
        return 1;
    }
    if (flag(root->right, tar)){
        ans.push_back(root);
        return 1;
    }
    return flag(root->left, tar) or flag(root->right, tar);
}

vector<TreeNode *> nodeToRootPath(TreeNode *root, int data){
    bool call = flag(root, data);
    // reverse(begin(ans), end(ans));
    return ans;
}