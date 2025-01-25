/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;

        // Variable to store the total number of valid paths
        int ans = 0;

        // Perform DFS for each node in the tree
        dfs(root, targetSum, ans);

        return ans;
    }

    void dfs(TreeNode* root, long long targetSum, int &ans) {
        if (root == nullptr) return;

        // Check all paths starting from the current node
        countPaths(root, targetSum, 0, ans);

        // Recurse for left and right subtrees
        dfs(root->left, targetSum, ans);
        dfs(root->right, targetSum, ans);
    }

    void countPaths(TreeNode* node, long long targetSum, long long currentSum, int &ans) {
        if (node == nullptr) return;

        // Update the current sum
        currentSum += node->val;

        // If the current sum matches the target sum, increment the count
        if (currentSum == targetSum) {
            ans++;
        }

        // Recurse for left and right subtrees to continue the path
        countPaths(node->left, targetSum, currentSum, ans);
        countPaths(node->right, targetSum, currentSum, ans);
    }
};
