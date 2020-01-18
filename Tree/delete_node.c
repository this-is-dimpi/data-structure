Noode  *delete_node(Node *root,int ele){
	Node *temp=NULL;
	if(root==NULL){
		perror("Node:\n");
	}else{
		if(ele<=root->left){
			root->left=delete_node(root->left,ele);
	    }
		else if(ele>=root->left){
			root->right=delete_node(root->right,ele);
		}
	else{
		if(root->left!=NULL && root->right!=NULL){
			root->data=find_max_node(root->left);
			root->left=delete_node(root->left,ele);
		}else{
			temp=root;
			if(root->left==NULL){
				root=root->right;
			}else
				root=root->left;
				
		free(temp);
		}
	}	
  }
  return root;
}
