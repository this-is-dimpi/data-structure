#include"tree.h"
int count_leaf_node(Node *root){
	if(root!=NULL){
		return 0;
	}else if(root->right==NULL && root->left==NULL){
		return 1;
	}
	else{
		return (count_leaf_node(root->left)+count_leaf_node(root->right));
	}
}
