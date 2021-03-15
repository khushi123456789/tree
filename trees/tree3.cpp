int diameter(node *root,int res){
	if(root==NULL)
	return 0;
	l=diameter(root->left,int res);
	r=diameter(root->right,int res);
	temp=max(l,r)+1;
	ans=max(temp,l+r+1);
	res=max(temp,ans);
	return res;
	
}
node lca(node n1,node n2,node root){
	if(root==NULL)
	return NULL;
	if(root==n1&&root==n2)
	return root;
	l=lca(n1,n2,root->left);
	r=lca(n1,n2,root->right);
	if(l!=NULL&&r!=NULL) return root;
		if(l==NULL&&r==NULL) return root;
	return(l!=NULL)?l:r;
}
class Solution {
public:
    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = height(root -> left);
        int right = height(root -> right);
        return max(left, right) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        if (!isBalanced(root->left) || !isBalanced(root->right))
            return false;
        
        int left = height(root -> left);
        int right = height(root -> right);
        int ans = left - right;
        if(abs(ans) == 1 || abs(ans) == 0){
            return true;
        }
        else{
            return false;
        }
    }
};
