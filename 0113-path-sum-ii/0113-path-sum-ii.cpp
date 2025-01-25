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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        vector<int> temp ;

        dfs(root , targetSum , ans , temp);

        return ans;   
    }

    void dfs(TreeNode* root, int targetSum , vector<vector<int>> &ans , vector<int> temp  ){

        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr && targetSum == root->val){
            temp.push_back(root->val);
            ans.push_back(temp);
            return;
        }
       temp.push_back(root->val);
        dfs(root->left , targetSum - root->val , ans , temp);
        dfs(root->right , targetSum - root->val , ans , temp);


    }
};