int non_leaf_node(Node *root){
	int  count=0;
	if(root==NULL || (root->left==NULL && root->right==NULL)){
		return 0;
	}else{
		return 1+non_leaf_node(root->left)+non_leaf_node(root->right);
	}
}
