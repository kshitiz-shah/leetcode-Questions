class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        dfs(root, sum, "");
        return sum;
    }

    void dfs(TreeNode* root, int &sum, string str) {
        if (root == nullptr) return;

        str += (root->val + '0');

        
        if (root->left == nullptr && root->right == nullptr) {
            int decimal = stoi(str, nullptr, 2);
            sum += decimal;
            return;
        }

        dfs(root->left, sum, str);
        dfs(root->right, sum, str);
    }
};