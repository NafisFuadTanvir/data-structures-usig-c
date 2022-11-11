#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
  int key;
  struct Node *left, *right;
};


struct Node *newNode(char n) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->key = n;
  node->right = node->left = NULL;
  return node;
}


int countNumNodes(struct Node *root) {
  if (root == NULL)
    return (0);
  return (1 + countNumNodes(root->left) + countNumNodes(root->right));
}


bool checkComplete(struct Node *root, int index, int numberNodes) {
  
  if (root == NULL)
    return true;

  if (index >= numberNodes)
    return false;

  return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}

int main() {
  struct Node *root = NULL;
  root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);

  int node_count = countNumNodes(root);
  int index = 0;

  if (checkComplete(root, index, node_count))
    printf("The tree is a complete binary tree\n");
  else
    printf("The tree is not a complete binary tree\n");
}