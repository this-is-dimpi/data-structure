Node *insert_node(Node *root,int ele){
	if(root==NULL){
		root=(Node *)malloc(sizeof(node));
		root->data=ele;
		root->left=NULL;
		root->right=NULL;

	}else{
		if(ele<=root->data){
t			root->left=nsert_node(root->left,ele);
			
		}else{
			root->right=insert_node(root->right,ele);
		}
				
	}
	return root;
}
