boolean sametree(node *root1,node *root2){
	if(root1==NULL&&root2==NULL)
	retrun true;
	if(root1!=NULL||root2!=NULL)
	retrun false;
	return (root1->data==root->data)&&(root1->left==root2->left)&&(root1->right==root2->right);
}
int size(node *root){
	 if(root==NULL)
	 return 0;
	 int l=size(root->left);
	 int r=size(root->right);
	 return l+r+1;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {

bool helper(TreeNode* leftnode,TreeNode* rightnode)
{
if(!leftnode && !rightnode)
return true;
if(leftnode==NULL && rightnode)
return false;
if(rightnode==NULL && leftnode)
return false;
return leftnode->val==rightnode->val && helper(leftnode->left,rightnode->right)
&& helper(leftnode->right,rightnode->left);
}
bool isSymmetric(TreeNode* root) {

    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL)
        return true;
    return helper(root->left,root->right);

    }
    }
};
