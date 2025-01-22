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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector <int> tree1 ;
        vector <int> tree2 ;

        dfs(root1 , tree1);
        dfs(root2 , tree2);

        if(tree1.size() != tree2.size())return false;

        else{
            for(int i=0;i< tree1.size();i++){
                if(tree1[i] != tree2[i]) return false;
            }
        }

    return true;
        
    }

    void dfs(TreeNode* root1 , vector<int> &tree1){
       
       if( root1->left == nullptr && root1->right == nullptr){
        tree1.push_back(root1->val);
        return;
       }
       else{
        if(root1->left != nullptr){
            dfs(root1->left , tree1);
        }
        if(root1->right != nullptr){
            dfs(root1->right ,tree1);
        }
       }


    }
};