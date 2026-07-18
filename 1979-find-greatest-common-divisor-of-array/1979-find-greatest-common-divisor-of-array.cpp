class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = -1 ;
        int mini = 10001 ;

        for(int i = 0 ; i< nums.size() ;i++){
            maxi = max(maxi , nums[i]);
            mini = min(mini  , nums[i]);
        }

     return   gcd(maxi ,mini);

        
    }
    int gcd(int a , int b){

        while(a != 0 && b != 0){
            if(a >= b) a %= b ;
            else b %= a ;
        }
        return (a == 0)?b:a;
    }
};