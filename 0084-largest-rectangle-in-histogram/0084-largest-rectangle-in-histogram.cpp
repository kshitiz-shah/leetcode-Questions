class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {

        int n = nums.size();
        stack <int> st;
       

         vector <int> pse(n ,-1) ;
        vector <int> nse(n, n) ;

        int ans  = 0 ;

        for(int i = 0 ;i< n ;i++){
            while(!st.empty() && nums[st.top()] >= nums[i]){
               
              st.pop();

            }
            if(!st.empty() && nums[st.top()] < nums[i]){
               
               pse[i]=  st.top();
               

            }
            st.push(i);      
        }

         stack <int> st2;

         for(int i = n-1 ; i >= 0 ; i--){

            while( !st2.empty() && nums[st2.top()] >= nums[i]){
                st2.pop();
            }
            if(!st2.empty() && nums[st2.top()] <  nums[i]){
                nse[i]= st2.top();
            }
            st2.push(i);

         }

         for(int i = 0 ;i < nums.size();i++){

            ans = max(ans , (nums[i] * (nse[i] - pse[i] -1 )) );
         }
         return ans;

        
    }
};