class Solution {
public:
    int smallestDivisor(vector<int>& nums, int limit) {

    int left = 1 ;
   int right  = *max_element(nums.begin(), nums.end());
    int ans = 0;

    while(left <= right){
        int mid = left + (right - left)/2 ;
         int k = 0;
        for(int i =0 ;i < nums.size();i++){
          k += ceil((double)(nums[i]) / (double)(mid));
        }
        if(k <= limit){
            ans = mid ;
             right= mid -1 ;
            
        }else{
           
            left = mid +1 ;
        }


    }
    return ans ;
        
    }
};