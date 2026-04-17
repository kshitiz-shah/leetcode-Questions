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
    void flatten(TreeNode* root) {
        if(!root)return;

        vector <int> temp ;
       

        dfs(temp , root );
        TreeNode* curr = root ;

        for(int i = 1 ; i < temp.size();i++){
           curr->left = nullptr ;
           curr->right = new TreeNode(temp[i]);
           curr = curr->right;
        }


        
        
    }
    void dfs(vector <int>&temp , TreeNode* root){
        if(!root) return ;

        temp.push_back(root->val );
        dfs(temp , root->left);
        dfs(temp ,root->right);
    }
};