class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int ans = 0;
        int buy = INT_MAX;

        for(int i = 0 ;i < prices.size() ;i++){
           buy = min(buy , prices[i]);

           ans = max(ans , prices[i] - buy);
            

        }
        return ans ;
        
    }
};