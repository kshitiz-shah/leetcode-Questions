class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n = prices.size();
        vector<int> ans = prices;
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {

            // Remove elements that cannot be discounts
            while (!st.empty() && st.top() > prices[i]) {
                st.pop();
            }

            // Now stack top is the discount (if any)
            if (!st.empty()) {
                ans[i] -= st.top();
            }

            // Push current price for next iterations
            st.push(prices[i]);
        }

        return ans;
    }
};