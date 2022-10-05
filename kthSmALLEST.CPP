int kthSmallest(TreeNode *root, int &k)
{
    if (!root)
        return -1;
    int lt = kthSmallest(root->left, k);
    if (lt != -1)
        return lt;
    if (--k == 0)
        return root->val;
    int rt = kthSmallest(root->right, k);
    if (rt != -1)
        return rt;
    return -1;
}

//kth largest = n - kth smallest