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
    int maxPathSum(TreeNode* root) {

       
        int pathsum = INT_MIN;

        helper(root , pathsum);
        return pathsum ;
        
    }

    int helper(TreeNode* root , int &pathsum){

        if(!root)return 0;

       int left = max( 0 , helper(root->left ,  pathsum)); 
       int right =  max(0,helper(root->right ,pathsum)); 


      

       pathsum = max(pathsum , left + right + root->val );


       return max(left , right) + root->val ;





        
       
    


        




    }

};