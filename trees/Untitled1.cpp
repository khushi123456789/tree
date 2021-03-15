node* invertree(node* root){
	node *temp;
	left=root;
	right=root;
	if(root==NULL){
		return NULL;
	}
	root->left=temp;
	temp=root->right;
	root->right=temp;
	invertree(root->left);
	invertree(root->right);
	return root;
}
int findheight(node* root){
	if(root==NULL){
		return -1;
	}
	leftheight=findheight(root->left);
	rightheight=findheight(root->right);
	return 1+max(leftheight,rightheight);
}

