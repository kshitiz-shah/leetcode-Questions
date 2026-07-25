class Solution {
public:
    int maxProduct(int n) {

        int a = 0; 
        int b = 0 ;
        while(n > 0){
            int rem = n %10 ;
            if(rem > a){
                 b =a ;
                a = rem ;
            
               
            }else if( rem > b){
                b= rem ;
                
            }
            n /=10 ;
        }
        return a * b ;
        
    }
};