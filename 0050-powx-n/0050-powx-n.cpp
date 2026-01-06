class Solution {
public:
    double power(double x, long long n) {
        //your code goes here
        if( n == 0) return 1 ;

        if( n % 2 == 0){
          return  power( x * x , n / 2);
        }else{
          return  x * power( x , n - 1);
        }
    }

    double myPow(double x , int n){
        long long  num = n ;
        if(num <0){
          return (1.0 / power(x,-num)) ;
        }
         return power(x,num);
    }
   
};