void Preorder(node *root) {
    if (!root) return;
    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}
