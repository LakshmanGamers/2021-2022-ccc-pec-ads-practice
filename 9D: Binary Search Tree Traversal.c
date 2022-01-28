#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int key;
    struct node *left, *right;
};
 
// A utility function to create a new BST node
struct node* newNode(int item)
{
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
// A utility function to do inorder traversal of BST
void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}
void preorder(struct node* root)
{
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
      
        preorder(root->right);
          
    }
}
void postorder(struct node* root)
{
    if (root != NULL) {
        postorder(root->left);
       
        postorder(root->right);
         printf("%d ", root->key);
    }
}


struct node* insert(struct node* node, int key)
{
    
    if (node == NULL)
        return newNode(key);
 
    
    if (key <= node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
   
    return node;
}
 

int main()
{
    int n,i,v;
    scanf("%d",&n);
    struct node* root = NULL;
    scanf("%d",&v);
    root = insert(root,v);
    for(i=0;i<n-1;i++){
        scanf("%d",&v);
        insert(root,v);;
    }
    
 
   printf("Preorder:");
    preorder(root);
    printf("\n");
   printf("Inorder:");
    inorder(root);
    printf("\n");
   printf("Postorder:");
    postorder(root);
    printf("\n");
    
 
    return 0;
}
