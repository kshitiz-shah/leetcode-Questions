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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int,int> isMap;

        for(int i = 0 ; i < preorder.size() ;i++){
            isMap[inorder[i]] = i ;
        }
        int preindex = 0 ;


       return helper(isMap , 0 , preorder.size()-1, inorder, preorder ,preindex) ;


        
    }
    TreeNode* helper(unordered_map<int,int> &isMap , int start , int end , vector<int>& inorder , vector<int>& preorder ,int &preindex){

              if(start > end)return nullptr ;

              int rootval =  preorder[preindex++];

              TreeNode* root = new TreeNode(rootval);

              int ind =  isMap[rootval];


            root->left =   helper(isMap , start, ind -1, inorder, preorder , preindex) ;

            root->right = helper (isMap , ind +1  , end , inorder, preorder , preindex);

            return root ;






    }
};