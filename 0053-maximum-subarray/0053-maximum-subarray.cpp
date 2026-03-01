class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        long long maxsum = 0 ;
        long long ans = INT_MIN;

        for(int  i = 0 ; i < nums.size() ; i++){

           

            if(maxsum <0){
                maxsum = 0;
            }
             maxsum += nums[i] ;
            ans = max(ans ,maxsum);

        }

        return ans ;


        
    }
};