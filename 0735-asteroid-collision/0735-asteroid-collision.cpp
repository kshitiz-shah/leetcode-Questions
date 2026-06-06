class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack <int> st ;

       for(int x : asteroids){
        if(x > 0){
            st.push(x);
        }
        else{
            while(!st.empty() &&  st.top() > 0 && abs(x) > abs(st.top())){
                st.pop();
            }
            if((!st.empty()) && st.top() > 0 &&  abs(x) == abs(st.top()) && x < 0){
                st.pop();
                continue ;
            }

             if(!st.empty() && st.top() < 0)st.push(x);

            if(st.empty())st.push(x);

        }

       }
       vector <int> ans ;
       while(!st.empty()){
        int x = st.top();
        st.pop();
        ans.push_back(x);
       }
       reverse(ans.begin() ,ans.end());
       return ans ;
        
    }
};