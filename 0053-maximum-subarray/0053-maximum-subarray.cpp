class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum =0 ;
        int n= nums.size();
        int left = 0;
        int ans = INT_MIN ;
        


        while(left < n ){
            if(sum < 0){
                sum = 0;
            }
           sum += nums[left];
           ans = max(sum ,ans );
            left++;

        }
        return ans;
       
        
    }
};