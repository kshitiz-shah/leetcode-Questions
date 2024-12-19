class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n=  prices.size();
        int discount = 1e9;
        vector <int> ans(n) ;

        int ptr ;

        for(int i=0 ;i<n ;i++){
            bool counter = true;

            for(int j= i+1 ; j<n;j++){
                if(prices[i] >= prices[j]){
                    ans[i]= prices[i] - prices[j] ;
                    counter =false;
                    break;
                }

            }
            if(counter == true){
                ans[i] = prices[i];
            }

           

        } 

      return ans;

        

        
    }
};