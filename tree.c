#include <stdio.h>
#include <stdlib.h>

// Definition of a binary search tree (BST) node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node with a given value
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
struct TreeNode* insert(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to search for a value in the BST
struct TreeNode* search(struct TreeNode* root, int value) {
    // Base cases: the value is not present or is found at the current node
    if (root == NULL || root->data == value) {
        return root;
    }

    // If the value is smaller, search in the left subtree
    if (value < root->data) {
        return search(root->left, value);
    }

    // If the value is larger, search in the right subtree
    return search(root->right, value);
}

// Function to print the inorder traversal of the BST
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct TreeNode* root = NULL;

    // Insert values into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    // Search for a value in the BST
    int searchValue = 40;
    struct TreeNode* result = search(root, searchValue);

    if (result != NULL) {
        printf("Value %d found in the BST.\n", searchValue);
    } else {
        printf("Value %d not found in the BST.\n", searchValue);
    }

    return 0;
}
