#include  "tree.h"
void inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right;
	}
}
