class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
  // same as book allocation problem
        int n = nums.size();
        // since it says non empty sets ..
        if(k> n)return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int ans = -1;

        while(low <= high){
            int mid = low +(high - low)/2;
            int  no_of_sets  = countnumbers(nums , mid);
            //if its is less then then k it means the rate fast it cant get upto k subarrays..so we have to slow the rate.
            if(no_of_sets <= k){
                ans = mid ;
                high = mid -1;

            }
            else{
                low = mid +1;
            }
        }
        return ans;

        
    }
     int countnumbers(vector<int>& nums, int mid){
        int subarray = 1;
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(count + nums[i] <= mid){
                count += nums[i];
            }
            else{
                count = nums[i];
                subarray ++;
            }
        }
        return subarray;

     } 
};