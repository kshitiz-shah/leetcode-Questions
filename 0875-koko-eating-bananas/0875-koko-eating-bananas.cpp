class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
         int low = 1;
    int high = nums[0];
    for(int i = 0 ; i< nums.size();i++){
       
        high = max(high , nums[i]);
    }
    int ans = INT_MAX;
   

    while(low <= high){

        int mid = low + (high - low)/2 ;
       long long hr_needed = solve(nums, mid ) ;

        if(hr_needed > h)low = mid +1;
        else{
            ans = mid ;
            high = mid -1 ;
        }

        

      

    }
    return ans;
 
    }
  long long solve(vector <int> nums  , long long rate ){

       long long count = 0 ;

        for(int i = 0 ;i < nums.size();i++){
            count += (nums[i] /rate);
            if(nums[i] % rate > 0)count++;
        }
        return count ;


        
    }
};