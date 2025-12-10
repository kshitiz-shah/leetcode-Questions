class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        stack <int> st;
        int n = prices.size() -1 ;


        for(int i =  n ; i >= 0 ;i--){

            if(st.empty()){
                prices[i] = prices[i];
                st.push(prices[i]);
            }
            else{
                while( (!st.empty())  &&  st.top() > prices[i] ){
                    st.pop();

                }
                 if(st.empty()){
                prices[i] = prices[i];
                st.push(prices[i]);
            }
            else{
                int x = prices[i];
                prices[i]= prices[i] - st.top();
                st.push(x);

            }

            }


        }
        return prices ;
    }
};