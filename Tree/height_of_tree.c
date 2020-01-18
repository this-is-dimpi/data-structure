int height_of_tree(Node *root){
	if(root==NULL || (root->left==NULL && root->right==NULL))
		return 0;
	return maximum(height_of_tree(root->left),height_of_tree(root->right))+1;
}
