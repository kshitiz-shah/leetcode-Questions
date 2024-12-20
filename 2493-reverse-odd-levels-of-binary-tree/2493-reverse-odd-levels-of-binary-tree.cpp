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
    TreeNode* reverseOddLevels(TreeNode* root) {

        if(! root)return nullptr ;
        int level =1;

        helper(root->left ,root->right ,level);
        return root;
        
    }

    void helper(TreeNode* left ,TreeNode* right ,int level){

        if(left == nullptr || right == nullptr)return ;

        if(level % 2 == 1 )
        {
            swap(left->val ,right->val);

        }
         helper(left->left ,right->right ,level +1);
         helper(right->left ,left->right ,level +1);

    }
};