class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {

        int first = INT_MAX ;
        int second = INT_MAX ;

        if(nums.size() <3)return false ;

        for(auto num : nums){
            if(num <= first){
                first = num; 
            }
           else if(num <= second){
            second = num;
           } 
           else{
            return true ;
           }
        }
        return false;
        
    }
};