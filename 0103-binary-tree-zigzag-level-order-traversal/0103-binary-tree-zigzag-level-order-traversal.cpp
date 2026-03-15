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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector <vector<int>> ans ;

        if(root == nullptr)return ans ;

        queue <TreeNode*> q;
        q.push(root);
        bool flag= true ;

        while(!q.empty()){
            int levelsize = q.size();
            vector<int> level ;

            

            for(int i = 0 ; i < levelsize ;i++){
                TreeNode* node = q.front();
                q.pop();
               
                    if(node->left != nullptr)q.push(node->left);
                if(node->right != nullptr)q.push(node->right);
 
                level.push_back(node->val);
               

            }
            if(flag == true){
              flag = false;
            }
            else{
                reverse(level.begin(),level.end());
                flag = true ;
                
            }
            ans.push_back(level);

        }
        return ans;
        
    }
};