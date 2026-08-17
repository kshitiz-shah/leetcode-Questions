class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int right = nums.size()-1 ;
        int left = 0;

     

      while(left < right){
        if(nums[left] % 2 == 1){
            swap(nums[left] ,nums[right]);
            right --;

        }else{
            left++;
        }
      }
        return nums ;
        
    }
};