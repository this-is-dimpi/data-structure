Node *inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right;
	}else{
		perror("Node:");
	}
}
