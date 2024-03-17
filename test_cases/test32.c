
#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void inOrderTraversal(struct TreeNode* node) {
    if (node == NULL) return;
    
    inOrderTraversal(node->left);
    printf("%d ", node->val);  // Print value of node
    inOrderTraversal(node->right);
}

int main() {
    struct TreeNode root, n1, n2, n3;
    
    // Construct a binary tree.
    root.val = 10;
    root.left = &n1;
    root.right = &n2;
    
    n1.val = 5;
    n1.left = NULL;
    n1.right = NULL;
    
    n2.val = 15;
    n2.left = &n3;
    n2.right = NULL;
    
    n3.val = 7;
    n3.left = NULL;
    n3.right = NULL;
    
    // Print the tree in order.
    printf("In-order traversal:\n");
    inOrderTraversal(&root);
    printf("\n");
    
    return 0;
}
