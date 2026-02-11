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
    bool isBalanced(TreeNode* root) {

      int ans =  func(root );

     return  ans == -1 ? false: true;
        
    }

  int func(TreeNode* root ){
          
          if(root == nullptr) return 0 ;

        int left = func(root->left );
        if(left == -1)return -1 ;

         int right = func(root->right );
        if(right == -1)return -1 ;

       if(abs(left - right) > 1)return -1 ;

       return 1 + max(left,right);




          

    }
};