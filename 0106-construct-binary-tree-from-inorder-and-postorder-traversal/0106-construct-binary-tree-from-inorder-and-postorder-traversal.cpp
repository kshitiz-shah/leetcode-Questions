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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
      int n =   inorder.size()-1 ;
         int postIndex =  n ;

         unordered_map<int,int> mpp ;

         for(int i = 0 ; i <= n ; i++){
            mpp[inorder[i]] = i ;

         }

       return  helper(inorder , postorder ,  mpp , 0 , n , postIndex); 
        
    }
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder , unordered_map <int , int> &mpp , int start , int  end , int &postIndex){

        if(start > end) return nullptr ;

        int nodeval = postorder[postIndex--] ;

        TreeNode* node = new TreeNode (nodeval);

        int ind = mpp[nodeval];
         node->right =  helper(inorder , postorder ,  mpp , ind + 1 , end , postIndex); 
        node->left =   helper(inorder , postorder ,  mpp , start ,ind - 1, postIndex); 
       

       return node ;


    }
};