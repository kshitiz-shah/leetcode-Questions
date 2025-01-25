class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(root, targetSum, ans, temp);
        return ans;
    }

    void dfs(TreeNode* root, int targetSum, vector<vector<int>> &ans, vector<int> &temp) {
        if (root == nullptr) return;

        // Add current node value to the path
        temp.push_back(root->val);

        // Check if it's a leaf node and the path sum equals the target
        if (root->left == nullptr && root->right == nullptr && targetSum == root->val) {
            ans.push_back(temp); // Add the path to the result
        } else {
            // Explore left and right subtrees
            dfs(root->left, targetSum - root->val, ans, temp);
            dfs(root->right, targetSum - root->val, ans, temp);
        }

        // Backtrack by removing the last added node
        temp.pop_back();
    }
};
