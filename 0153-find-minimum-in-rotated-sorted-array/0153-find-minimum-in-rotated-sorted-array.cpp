class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans =INT_MAX;
        int low =0;
        int high = nums.size()-1;

        while(low<= high){
            int mid = low +(high -low)/2;
            if(nums[mid] >= nums[low]){
                ans = min(nums[low],ans);
                low= mid+1;
            }
            else{
                ans =min(nums[mid],ans);
                high = mid -1;
            }
           
        }
        return ans;
        
    }
};