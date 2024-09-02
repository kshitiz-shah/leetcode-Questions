class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {

         //for the max noumbers in the array  
           int maxi = maxele(nums);
            int ans = -1;
           int low = 1; int high = maxi;
             
           while(low <= high){
            int mid = (low + high)/2;
            // total hpurs to eat the banana
            //long long  if the value is too high
            long long total =  totalhrs(nums , mid);

            // if the total hors is less then the required hours we have a pitential ans
            // but we need  the minimum ans .. sp right part will be no use 
              if(total <= h) {
              ans = mid;
              high = mid -1;
              }
              // else  total hours is more then the required hrs so the monkey has to eat he banana faster.
              // so chopping the left part.
              else{
                low = mid + 1;
              }

           }
            
        return ans;
    }

private:
    int maxele(vector<int> nums){
        int x= nums[0];

        for(int i=0;i<nums.size();i++){
            x= max(x,nums[i]);
        }
        //return the max hours
           return x;
    }

private:
 long long totalhrs( vector <int> nums , int rate){
          
          long long hrs =0;
          for(int i=0;i<nums.size();i++){
            // gives you the round off value.
            hrs += ceil(double(nums[i])/ double (rate));
          }
          return hrs;
        
    }
};