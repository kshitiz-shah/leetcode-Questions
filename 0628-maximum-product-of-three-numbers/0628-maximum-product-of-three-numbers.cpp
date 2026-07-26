class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;


        for(int x : nums){
            if(x >= first){
                third = second ;
                second = first ;
                first = x ;
            }else if( x >= second){
                third = second ;
                second = x ;
            }else if(x > third){
                third =x ;

            }
             if( x <= min1){
                min2 = min1 ;
                min1 = x ;
            }else if(x < min2){
                min2 = x ;
            }
        }
    //    if( min1 == INT_MAX || min2 == INT_MAX)return first* second * third ;
        return max(min1 * min2 * first , first* second * third);
    }
};