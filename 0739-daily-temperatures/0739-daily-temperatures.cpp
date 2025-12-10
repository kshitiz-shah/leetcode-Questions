class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        stack <pair<int ,int>>st ;

        
        int n= temp.size() -1 ;
         vector <int> ans(n+1) ;

        for(int i = n ; i >= 0 ;i--){

            while(!st.empty() && st.top().first <= temp[i] ){
                st.pop();
            }

            if(!st.empty() && st.top().first > temp[i]){
                   ans[i]= st.top().second - i;
            }

            if(st.empty()){
                ans[i] = 0;
            }
           
            st.push({temp[i],i});
        }


       return ans; 
    }
};