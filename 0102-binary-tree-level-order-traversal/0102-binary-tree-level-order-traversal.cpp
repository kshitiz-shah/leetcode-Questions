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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {} ;

        queue <TreeNode*> q ;
        q.push(root);
        vector <vector <int>> ans ;


        while(!q.empty()){
            vector <int> temp ;
            int level = q.size();

            for(int i = 0 ;i < level ;i++){
                TreeNode* node = q.front();
                q.pop();
                int k = node->val ;
                temp.push_back(k);
                if(node->left != nullptr)q.push(node->left);
                if(node->right != nullptr)q.push(node->right);

            }
            ans.push_back(temp);

        }
        return ans;
        
    }
};