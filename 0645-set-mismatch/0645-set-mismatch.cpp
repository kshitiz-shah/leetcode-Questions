class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        
          unordered_map<int , int> mpp;
          int repeated_num = 0;
          int missing_number = 0;

        for(int i= 0 ; i < n ; i++){
        
            mpp[nums[i  ]]++;
                   
        }
        

       for(int i= 1 ; i <= n ; i++){

             if( mpp[i] == 2 ){
                repeated_num = i;
            }
           else if( mpp[i] == 0 ){
                missing_number = i;
            }

                   
        }
       
       return {repeated_num , missing_number };
  

    }
};