class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const int mod = 1e9 + 7 ;
        vector <int> nse(n , n);
         vector <int> pse(n , -1);

         find_nse(arr,nse);
         find_pse(arr,pse);
         long long ans= 0 ;

         for(int i = 0 ; i< arr.size();i++){
            ans = (ans + 1LL * (i-pse[i])* (nse[i] - i) * arr[i]) %mod ;
         }

         return ans%mod ;
        
    }
   void find_nse(vector <int> arr, vector <int> &nse){
        stack <int> st; 

        for(int i = arr.size()-1 ;i >= 0;i--){

            while(!st.empty() && arr[st.top()] >= arr[i])st.pop();
            if(!st.empty())nse[i]= st.top();
            st.push(i);
        }
    }

    void find_pse(vector <int> arr, vector <int> &pse){
        stack <int> st; 

        for(int i =0 ;i <arr.size();i++){

            while(!st.empty() && arr[st.top()] > arr[i])st.pop();
            if(!st.empty())pse[i]= st.top();
            st.push(i);
        }
    }
};