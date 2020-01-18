int find_max_node(Node *root){
	int  max=0;
	while(root!=NULL && root->right!=NULL ){
		root=root->right;
	}
	if(root==NULL){
		max	=root->data;
	}
	return max;
}
	
	
