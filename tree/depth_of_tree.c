#include "tree.h"
int depth(Node *root,int ele){
	if(root==NULL){
		return 1;
	}else if(ele >root->data){
		return depth(root->left)+1;
	}else
		return depth(root->right)+1;
}
