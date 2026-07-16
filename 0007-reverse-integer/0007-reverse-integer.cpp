class Solution {
public:
    int reverse(int x) {

        bool flag = false ;

        if(x < 0)flag = true ;
        long long k = x;
        if(k < 0) k = - k;
       

    
      long long ans = 0;

        while(k > 0){
            int temp = k % 10 ;
          
            if(ans > INT_MAX/ 10 || ans < INT_MIN /10)return 0 ;
              ans = (ans* 10) + temp ;

            k /= 10 ;
        }
       
       if(flag == true)return (int) -ans ;
        return (int) ans ;
        
    }
};