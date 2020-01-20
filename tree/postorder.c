Node *postorder(Node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d\n",root->data);
	}else{
		perror("Node:");;
	}
}
