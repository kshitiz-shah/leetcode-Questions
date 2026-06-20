class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 1 ;
        int n = nums.size();
        if(n==1)return true ;
        for(int i = 1 ; i < 2*n ;i++ ){
            if(nums[i %n] >= nums[(i-1) %n]){
                count++ ;
                if(count == n)return true ;
            }
            else{
                count = 1 ;
            }

        }
        
        return false ;
        
    }
};