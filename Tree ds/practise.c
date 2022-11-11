#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key;
    struct node *left, *right;
};


struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp-> key = item;
    temp->left = temp->right = NULL; 
    return temp;
}

void inorder(struct node* root)
{
if (root != NULL)
 {
inorder(root->left); 
printf("%d \n", root->key); 
inorder(root->right);
}
}
struct node* insert(struct node* node,struct node *root, int key)
{
  if (node == NULL) 
   return newNode(key);
   else if(key>root)
    root->left = newNode(key);
   else
   root->right= newNode(key);

     return root;
}
 int main()
 {
struct node* root = NULL; 
root = insert(root, 50); 
insert(root, 30);
 insert(root, 20);
 insert(root, 40); 
 insert(root, 70);
insert(root, 60); 
insert(root, 80);
inorder(root);
return 0;
 }
