class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int low = 0 ;
        int high = nums.size()-1 ;

        while( low <= high){
            int mid = low + (high - low)/2 ;
            if(nums[mid] == k)return true;
             if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue ;
            }
            
            if(nums[mid] == k)return true;
            else  if(nums[low] <= nums[mid]){
                if(nums[low] <= k  && nums[mid] > k){
                    high = mid -1 ;
                }else{
                    low = mid +1 ;
                }


            }
            else{
                if(nums[high] >= k && nums[mid] < k){
                    low = mid +1 ;
                }else{
                    high = mid -1 ;
                }
            }
        }
        return false ;
      
        
    }
};