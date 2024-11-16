class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        
        vector<int> sub;

        int left = 0;
        int right = left + k;
        int n= nums.size();


        while(right <=  n){
           
            bool ans = true ;
            for(int i = left; i < (left + k - 1) ; i++){

                if((nums[i] + 1)!= (nums[i +1] )){
                    ans = false;
                    break;
                }
               
            }
           if( ans == true){
            sub.push_back( nums[(left+k-1)]);
           }
           else{
            sub.push_back(-1);
           }

            left ++;
            right++;


        }
        return sub;
    }
};