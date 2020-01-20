Node *preorder(Node *root){

	if(root!=NULL){
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}else{
		perror("Node:");
	}
}
