 bool hasPathSum(TreeNode* root, int targetSum) {
	  // oops: Intent was to find one path with sum of each nodes along the path from
	  //root to leaf node matching target sum but looks like we have gone past the leaf
	  //node and no luck in finding what we intended.
	  // Return false this path traversal was not fruitful; lets try different path
        if (root == nullptr)
            return false;
        
		// Wait we have found the path matching targetSum; but is this node leaf node
		// Yes this is leaf node So lets wind up the DFS stack and return the success.
        if (targetSum == root->val && root->left == nullptr && root->right == nullptr)
            return true;
       // No luck so far in this path lets backtrack/move forward and try remaining
	   // Left path and if we find intended result then break the search if not then try taking "right" path.
        return (hasPathSum(root->left, targetSum-root->val) || hasPathSum(root->right, targetSum-root->val));
    }
