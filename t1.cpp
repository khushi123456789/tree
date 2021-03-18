int getfullnode(node* root){
	if(root==NULL)
	return 0;
	queue<node*> q;
	int count=0;
	q.push(node);
	while(!q.empty){
		struct node*temp=q.front();
		q.pop();
		if(temp->left&&temp->right)
		count++;
		if(temp->left!=NULL)
		q.push( temp->left;
		if(temp->right!=NULL)
		q.push( temp->right);
	}
	return count;
}
