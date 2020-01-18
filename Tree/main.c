#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *left;
	struct node *right;
	}Node;
	
typedef struct stack{
	int top_of_stack=-1;
	int maxSize;
	struct tree **node;
	}Stack;
	
Stack S;


	
void push(node *ele){
	if(S.top_of_stack==S.maxSize-1){
		printf("No more element can be inserted\n");;
	}
	S.node[S.top_of_stack]=ele;
	S.top_of_stack++;
}

node *

int main(){
	Node *temp=NULL;
	int i=0,ele;
	printf("Enter the choice:\n0.Insert Node\n1.Preorder Traversal\n2.Inorder Traversal\n3.Postorder Traversal\n4.Delete Node\n5.Height of tree\n6.Depth of tree\n7.No of Leaf Node\n8.No of Non-Leaf Node\n");
	scanf("%d",&i);
	while(1){
		switch(i){
			case INSERTNODE:
				printf("Enter the Node:\n");
				scanf("%d",&ele);
				temp=insert_node(&temp,ele);
				brreak;
			case PREORDER:
				temp=preorder(&temp);
				printf("The preorder traversal:%u\n",temp);
				break;
			case INORDER:
				temp=inorder(&temp);
				printf("The inorder traversal:%u\n",temp);
				break;
			case POSTORDER:
				temp=postorder(&temp);
				printf("The postorder traversal:%u\n",temp);
				break;
			case DELETENODE:
				if(temp==NULL){
					printf("Please Insert the node\n");
				}else{
					printf("Enter the deleted node\n");
					delete_node(&temp,ele);
					printf("%d Successfully Deleted\n",ele);
				}
				break;
			case HEIGHTOFTREEE:
				if(temp==NULL)
					printf("height of tree is 0\n");
				else{
					ele=height_of_tree(&temp);
					printf("The height of tree is:%d\n",ele);
				}
				break;
			case DEPTHOFTREE:
				if(temp==NULL)
					printf("Depth of tree is 0\n");
				else{
					ele=depth_of_tree(&temp);
					printf("The depth of tree is:%d\n",ele);
				}
				break;
			case LEAFNODE:
				if(temp==NULL){
					printf("The tree is empty\n");
				}else{
					ele=count_leaf_node(&temp);
					printf("No of leaf node:%d\n",ele);
				}
				break;
			case NONLEAFNODE:
				if(temp==NULL){
					printf("The tree is empty\n");
				}else{
					ele=non_leaf_node(&temp);
					printf("No of non leaf node:%d\n",ele);
				}
				break;
		}
	}
}

