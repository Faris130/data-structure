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
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}
int main(){
    
    struct node* root = createnode(1);
    insertleft(root,2);
    insertRight(root,3);
    insertleft(root->left,4);
    
     printf("\nPostorder traversal \n");
  postorderTraversal(root);
   
}
