class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int first = -1 ;
        int second = -1 ;

        for(int x : nums){
            if(x >= first){
                second = first ;
                first =x ;
            }
            else if(x > second){
                second = x ;

            }

        }
        return (first -1)*(second - 1);

        
    }
};