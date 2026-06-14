class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int ans = 0 ;
        int left = 0 ;
        int right = 0 ;

        while(right < nums.size()){

            if(nums[right] == 0)k-- ;

            while(k < 0){
                if(nums[left] == 0)k++ ;
                left++;
            }
            ans = max(right - left + 1 , ans);
            right++;
        }
        return ans ;
        
    }
};