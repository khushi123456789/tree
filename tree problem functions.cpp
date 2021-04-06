
void print levelorder(node *root){
	if(root==NULL){
		return;
	}
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node * node=q.front();
		q.pop();
		if(node !NULL){
			cout<<node->data<<" ";
			if(node->left)
			q.push(node->left);
			if(node->right)
			q.push(node->right);
		}
		else if(!q.empty())
		q.push(NULL);
	}
}
 void sumreplace(node * root){
 	if(root==NULL)
 	return 0;
 	sumreplace(root->left);
     sumreplace(root->right);
 	if(root->left!=NULL)
 	root->data+=root->left->data;
 	if(root->right!=NULL)
 	root->data+=root->right->data;
 }
   //balanced height tree=left height-right height<=1
  bool balanced(node *root){
 if(root==NULL)
 return true;
  if(balanced(root->left)==false)
  return false;
  	if(balanced(root->right)==false)
  	return false;
  	int lh=height(root->left);
  	int rt=height(root->right);
  	if(abs(lh-rt)<=1)
  	return true;
  } 
 // right view of binary tree
 void rightview(node *root){
 	if(root==NULL)
 	return ;
 	queue<node*> q;
 	q.push(root);
 	while(!q.empty()){
 		int n=q.size;
 		for(int i=0;i<n;i++){
 			node *curr=q.front;
 			q.pop();
 			if(i==n-1){
 				cout<<curr->data<<" ";
			 }
			 if(curr->left!=NULL)
			 q.push(curr->left);
			 	 if(curr->right!=NULL)
			 q.push(curr->right);
		 }
	 }
 	
 }
 //left view of binary tree
  void leftview(node *root){
 	if(root==NULL)
 	return ;
 	queue<node*> q;
 	q.push(root);
 	while(!q.empty()){
 		int n=q.size;
 		for(int i=0;i<n;i++){
 			node *curr=q.front;
 			q.pop();
 			if(i==0){
 				cout<<curr->data<<" ";
			 }
			 if(curr->left!=NULL)
			 q.push(curr->left);
			 	 if(curr->right!=NULL)
			 q.push(curr->right);
			 
		 }
	 }
 	
 }
 //shortest distance b/w two nodes
 
