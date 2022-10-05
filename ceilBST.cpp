int findCeil(Node *root, int input)
{
    if (root == NULL)
        return -1;

    // Your code here
    int ceil = -1;
    int floor = -1;
    while (root)
    {
        if (root->data == input)
        {
            ceil = floor = root->data;
            break;
        }
        else if (root->data < input)
        {
            floor = root->data;
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}