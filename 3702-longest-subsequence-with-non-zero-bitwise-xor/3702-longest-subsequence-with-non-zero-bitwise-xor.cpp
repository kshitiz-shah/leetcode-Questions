class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int count = 0 ;
        int ans = 0 ;

        for(int i = 0 ;i < nums.size();i++){
            if(nums[i] != 0)count++;
            ans ^= nums[i];
        }
        if(count == 0)return 0 ;
        if(ans == 0) return nums.size()-1 ;
        return nums.size();






       
    }
};