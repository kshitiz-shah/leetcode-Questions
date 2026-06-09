class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        int maxi =  -1 ;
         int mini = INT_MAX;


        for(int i = 0 ;i < nums.size();i++ ){
            maxi = max(nums[i] , maxi);
            mini = min(nums[i] , mini);
        }
        
      

        return (long long) (maxi - mini ) * k;
         

        
    }
};