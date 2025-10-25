class Solution {
public:
    int totalMoney(int n) {

       int days = 1;
       int mon = 1 ;
       int ans =0 ;
       int count = mon;


  for(int i = 0 ;i< n ;i++){

     if(days == 8){
        days =1;
        mon++;
        count = mon ;

       }
       ans += count ;
       count++;
       days ++;

  }
      
   return ans ;
        
    }
};