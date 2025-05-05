#include <stdio.h>
#include <stdlib.h>
struct node {
    int item;
    struct node* left;
    struct node* right;
};
struct node* createnode(int value){
struct node* newnode= malloc(sizeof(struct node));
newnode->item = value;
newnode->left= NULL;
newnode->right = NULL;
return newnode;
}
struct node*  insertleft(struct node*root, int value){
root->left = createnode(value);
return root->left;
}
struct node* insertRight(struct node*root, int value){
    root->right = createnode(value);
    return root->right;
}
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}
int main(){
    
    struct node* root = createnode(1);
    insertleft(root,2);
    insertRight(root,3);
    insertleft(root->left,4);
    
     printf("\nPreorder traversal \n");
  preorderTraversal(root);
   
}
