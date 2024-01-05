#include <stdio.h>
#include <stdlib.h>

struct node {
 int item;
 struct node* left;
 struct node* right;
};

// Function to create a new node
struct node* newNode(int data) {
 struct node* node = (struct node*)malloc(sizeof(struct node));
 node->item = data;
 node->left = NULL;
 node->right = NULL;
 return node;
}

// Inorder traversal
void inorderTraversal(struct node* root) {
 if (root == NULL) return;
 inorderTraversal(root->left);
 printf("%d ->", root->item);
 inorderTraversal(root->right);
}

int main() {
 struct node *root = newNode(1);
 root->left = newNode(2);
 root->right = newNode(3);
 root->left->left = newNode(4);
 root->left->right = newNode(5);

 printf("Inorder traversal of binary tree is \n");
 inorderTraversal(root);

 return 0;
}
