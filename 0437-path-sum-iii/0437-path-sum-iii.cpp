class Solution {
public:
    int paths = 0;
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;

        helper(root, targetSum, 0);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);

        return paths;
    }

    void helper(TreeNode* root, int target, long long currSum) {
        if(!root) return;
        
        currSum += root->val;

        if(currSum == target) {
            paths++;
        }
        helper(root->left, target, currSum);
        helper(root->right, target, currSum);
    }
};
