class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans( 2 * n );
      int k = ans.size()-1;
        for(int i = 0 ; i< n;i++){
            ans[i] = nums[i];
            ans[k-i] = nums[i];
        }
        return ans ;
        
    }
};