class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int maxfreq = 0;
        unordered_map<int ,int> mpp;

        int right = 0 ;
        int left = 0 ;

        while(right < nums.size()){
            mpp[nums[right]]++ ;
            while(mpp[nums[right]] > k){
                mpp[nums[left]]--;
                left++ ;

                
            }

            maxfreq = max(maxfreq , right - left +1);
            right++;
        }

    return maxfreq ;
        
    }
};