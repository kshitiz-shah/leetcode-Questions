class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {

        sort(nums.begin() , nums.end());
        int left = 0 ;
         int right = 0;
     
       int removal = 1;
       int   n= nums.size();
        while(right < n){
            if((long long)nums[left] * k  >= nums[right]){
                removal = max(removal ,right - left +1);
                right++;
               

            }
            else{
               left++;
            }
            

        }
         
       return  (n - removal) ;


        
    }
};