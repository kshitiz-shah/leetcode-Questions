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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false ;
        int sum =  0 ;

      return  helper(root , targetSum ,sum);

        
    }

    bool helper(TreeNode* root , int targetSum , int ans){
       
        if(!root) return  false ;
        if(ans == (targetSum- root->val)&& (root->left == nullptr && root->right == nullptr)){
            return true ;
        }
        

       return ( helper(root->left , targetSum , ans + root->val) ||  helper(root->right , targetSum , ans + root->val));
       

  
    }
    
};