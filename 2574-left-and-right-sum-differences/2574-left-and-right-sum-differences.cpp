class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefix_sum(n , 0);
          vector <int> suffix_sum(n , 0);
       
       int  prefix_count = 0;
        int suffix_count = 0;



          for(int i = 0 ;i < n ;i++){
            
            prefix_sum[i] = prefix_count;
            suffix_sum[n-i -1] = suffix_count ;
            prefix_count += nums[i];
            suffix_count += nums [n-1-i];

          }
          
          for(int i = 0 ;i < n;i++ ){
            prefix_sum[i] = abs(prefix_sum[i] - suffix_sum[i]);
          }
          return prefix_sum;
        
    }
};