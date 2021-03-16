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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return 1 + max(maxDepth(root->right),maxDepth(root->left));
    }
};
