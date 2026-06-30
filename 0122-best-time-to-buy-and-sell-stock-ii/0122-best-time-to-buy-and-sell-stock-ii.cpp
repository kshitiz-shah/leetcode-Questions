class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int ans = 0 ;

        int mini = prices[0];

        for(int i = 0 ;i < prices.size() ;i++){
            if(prices[i] > mini){
                ans +=  prices[i] - mini ;
                mini = prices[i];

            }
            mini = min(mini , prices[i]);
        }
        return ans ;
        
    }
};