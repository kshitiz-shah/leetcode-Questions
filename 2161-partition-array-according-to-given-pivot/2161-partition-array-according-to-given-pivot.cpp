class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      
      int left = 0 ;
      int fill_left = left ;
      int n = nums.size();
      int right = nums.size()-1 ;
      int fill_right = right ;
      
      vector <int> ans(right+1 , pivot);
     for(int i = 0 ;i < nums.size();i++){
        if(nums[i] < pivot)ans[fill_left++] = nums[left];
            
        
      if(nums[right] > pivot ) ans[fill_right--] = nums[right];
      left++;
      right--;
        
    }
    return ans ;
    }
};