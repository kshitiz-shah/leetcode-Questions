class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {



      int count = 0 ;

      int n= prices.size();
      long long ans = n ;

      for(int i  = 1 ; i< prices.size();i++){
        if(prices[i-1] - prices[i] == 1){
            count++;
        }
        else{
            count =0;
        }
        ans += count ;
      }
      return ans;
      
    }
};