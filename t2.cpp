void iterativepreoreder(node* root){
	if(root==NULL)
	return;
	stack<node> s= new stack<node>();
	s.add(root);
	while(!s.isempty()){
		root=s.pop();
		printf(root->data);
		if(s.right!=NULL)
		s.push(s->right);
		else if(s.left!=NULL)
		s.push(s->left);
	}
	
}
int coutnode(node *root){
	int count=0;
	if(root!=NULL)
	return (countnode(root->left));
	count++;
	return (countnode(root->right));
}
int countleave(node *root){
	int count=0;
	if(root==NULL){
	 retrun 0;}
	 if(root->left==NULL&&root->right==NULL)
	 return 1;
	return countleave(root->left)+countleave(root->right);
}
