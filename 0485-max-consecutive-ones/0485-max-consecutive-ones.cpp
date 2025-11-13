class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int ones = 0;
        int ans = 0;
        for(int i = 0 ;i< nums.size() ; i++){
            if(nums[i] == 0){   
                ones =0 ;
            }
            else{
                ones++;
            }

            ans = max(ans , ones);
        }
        return ans;
        
    }
};