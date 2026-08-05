class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prefixproduct = 1;
        int suffixproduct = 1 ;
        int n = nums.size();
        vector <int> ans(n ,0);

         int prefix[n] ;
         int suffix[n];

         for(int i = 0 ;i < nums.size();i++){
            prefixproduct *= nums[i];
            prefix[i] = prefixproduct ;

            suffixproduct *= nums[n-i -1];
            suffix[n-i-1] = suffixproduct ;

         }

        ans[0] = suffix[1];
        ans[n-1] =prefix[n-2];

        for(int i =1 ;i < n-1 ;i++){
            ans[i]= prefix[i-1] * suffix[i+1];
        }


        return ans ;



        
    }
};