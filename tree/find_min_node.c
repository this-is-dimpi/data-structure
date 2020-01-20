#include "tree.h"
int find_min_value(Node *root,int ele){
	int min =0;
	while(root!=NULL && root->left!=NULL)
		root=root->left;
	if(root==NULL){
		min=root->data;
	}
	return min;
}
