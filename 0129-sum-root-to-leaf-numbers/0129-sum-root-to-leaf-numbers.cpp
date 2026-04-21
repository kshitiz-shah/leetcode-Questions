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
    int sumNumbers(TreeNode* root) {

        if(!root)return  0 ;

        int ans =  0 ;
       string  pathsum = "" ;

        sumnumbers(root , ans , pathsum);

        return ans ;
     
    }

     void sumnumbers(TreeNode* root , int &ans, string pathsum){

        if(!root )return ;

      char x = root->val + '0';
        pathsum += x ;

        if(root->left == nullptr && root->right == nullptr){
        
         ans += stoi(pathsum);
         return;

        }




        sumnumbers(root->left , ans ,pathsum);
        sumnumbers(root->right , ans, pathsum);





     }


};