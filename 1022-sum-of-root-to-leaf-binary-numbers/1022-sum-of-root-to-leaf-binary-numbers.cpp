class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }

    int dfs(TreeNode* root, int current) {
        if (!root) return 0;

       
        current = current * 2 + root->val;
        if (!root->left && !root->right)
        {
            
             return current;
        }
           

        return dfs(root->left, current) +
               dfs(root->right, current);
    }
};