class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector <int> ans(2 * n) ;
        int count = 0;
        int temp = n;
      for(int i = 0 ; i < n ;i++){
        ans[count++] = nums[i];
        ans[count++] = nums[temp++];
      }
   return ans;
        
    }
};