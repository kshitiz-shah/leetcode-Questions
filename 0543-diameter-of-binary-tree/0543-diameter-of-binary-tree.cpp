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
    int diameterOfBinaryTree(TreeNode* root) {
       int ans = 0 ;
        dfs(root , ans);
     return ans ;  
    }

    void dfs(TreeNode* root , int & ans){

        if(root == nullptr)return ;
        
        int left =  maxdepth(root->left , 0);
        int right = maxdepth(root->right , 0);

      ans = max(ans ,left + right);
        dfs(root->left, ans);
        dfs(root->right, ans);

    }

    int maxdepth( TreeNode* root , int idx){
        if(root == nullptr)return 0 ;

        int left =  maxdepth(root->left , idx );
        int right = maxdepth(root->right , idx);

        return 1 + max(left , right);

    }
};