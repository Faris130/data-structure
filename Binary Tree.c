#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node *newNode(int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (node != NULL) {
        node->data = data;
        node->left = node->right = NULL;
    }
    return node;
}

// Function to insert a node into the binary tree (recursive)
struct Node *insertNode(struct Node *root, int data) {
    // If the tree is empty, create a new node
    if (root == NULL) {
        return newNode(data);
    }

    // If the data is less than the root's data, insert into the left subtree
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    // If the data is greater than the root's data, insert into the right subtree
    else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    // Return the modified root (no change if data is equal)
    return root;
}

// Function to perform in-order traversal
void inOrder(struct Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main() {
    struct Node *root = NULL;

    // Insert nodes
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    root = insertNode(root, 10);
    root = insertNode(root, 1);
    root = insertNode(root, 6);
    root = insertNode(root, 14);

    // Print the tree in in-order (sorted)
    printf("In-order traversal of the binary tree: ");
    inOrder(root);
    printf("\n");

    return 0;
}
