class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0 ;
        int ind =1 ;

        for( char x : s){
            int k = x - 'a';
            int rev = (26 - k)* ind ;
            ind++ ;

            ans += rev ;
        }
        return ans ;
        
    }
};