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
    TreeNode* sortedArrayToBST(vector<int>& nums) {

     return  helper( 0 , nums , nums.size()-1);

       
        
    }

    TreeNode* helper(int left , vector <int> &nums , int right){


    if(left > right)return nullptr;

    int mid = left + (right - left)/2 ;

    TreeNode* root =  new TreeNode(nums[mid]);

    root->left =  helper(left , nums, mid-1);
    root->right = helper(mid + 1 , nums , right);

     return root ;
    }



};