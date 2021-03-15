int mergetree(node *root1,node *root2){
	if(!root1&&!root2)
	return NULL;
	if(root1&&!root2)
	return root1;
	if(!root1&&root2)
	return root2;
	root1->val=root1->val+root2->val;
	root1->left=mergetree(root1->left,root2->left);
	root1->right=mergetree(root1->right,root2->right);
	return root1;
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
        }
        
        if (root == p or root == q) {
            return root;
        }
        
        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);
        
        if (leftAns and !rightAns) {
            return leftAns;
        }
        
        if (rightAns and !leftAns) {
            return rightAns;
        }
        
        if (leftAns and rightAns) {
            return root;
        }
        return NULL;
    }
};
