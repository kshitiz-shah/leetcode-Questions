class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector <int> pse(n , -1);
        vector <int> nse(n , n);
        stack <int> st;

// pse
       for(int i = 0 ; i < n ; i++){

        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
            
        }
        if(!st.empty()){
            pse[i] = st.top();
        }


        st.push(i);

       }

       while(!st.empty()){
        st.pop();

       }

       //nse 

       for(int i = n-1 ; i>= 0 ;i--){

        while(!st.empty() && heights[st.top()] >= heights[i]){
            st.pop();
        }

         if(!st.empty()){
            nse[i] = st.top();
        }


        st.push(i);


       }
       int ans = 0 ;
       for(int i = 0 ; i< n ;i++){
        int temp = heights[i] * ( nse[i] - pse[i] - 1);
        ans =  max( ans , temp);

        

       }




  return ans ;
        
    }
};