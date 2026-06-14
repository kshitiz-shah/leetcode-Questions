class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        
        int ans = solve(nums, k) - solve(nums, k-1);
        return ans ;
    }

    int solve(vector<int>& nums, int k){
        if(k < 0)return 0;

        int left = 0 ;
        int right = 0 ;
        int ans = 0 ;
        int oddcount = 0 ;

        while(right < nums.size()){

            if(nums[right] % 2 == 1)oddcount++;

            while(oddcount > k){
                if(nums[left]%2 == 1)oddcount--;
                left++;
            }
            ans += right - left +1 ;
            right++;
        }
        return ans ;
    }
};