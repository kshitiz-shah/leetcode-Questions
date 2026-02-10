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
    int maxDepth(TreeNode* root) {

        int ans = 0 ;

        func(ans , root , 0);

        return ans;
        
    }

    void func( int &ans , TreeNode* root , int i){
        if(root == nullptr){
            ans = max(i , ans);
            return ;
        }

        func(ans , root->left , i +1);
        func(ans, root->right , i+1);
    }
};