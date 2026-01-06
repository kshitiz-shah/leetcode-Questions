class Solution {
public:
    double myPow(double x, int n) {

       long long num = n; 
       if(num < 0) num = -num ;
       double ans = 1;

      while(num > 0){

        if( num % 2 == 0){
            x *= x;
             num /=2 ;
        }else{
            ans *= x ;
            num--;
        }

      }
      if(n <0)return (1/ans);
      return ans ;


        
    }
};