class Solution {
public:
    bool checkRecord(string s) {
        int  leave = 0 ;
        int ab = 0 ;

        for( char c : s){
            if(c == 'A') {
                ab++ ;
                leave = 0 ;
                if(ab >1){
                    return false ;
                }
            }
           else if(c == 'L'){
                leave++ ;
                if(leave == 3)return false;
            }
            else{
                leave = 0;
            }
            
        }

       return true ; 
    }
};