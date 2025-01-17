class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack <int> st;

        for(int i = 0 ; i < asteroids.size() ;i++){

            if(st.empty()){
                st.push(asteroids[i]);
            }


            else if((st.top() > 0 && asteroids[i] > 0) ||  (st.top() < 0 && asteroids[i] < 0)){
                 st.push(asteroids[i]);
            }

            else{
                 bool survive = true;
                while(!st.empty() && (st.top() > 0 && asteroids[i]  < 0) ){
                   

                    if(abs(asteroids[i]) > abs(st.top()) ){
                        st.pop();

                    }
                    else if(abs(asteroids[i]) == abs(st.top())){
                        survive = false;
                        st.pop();
                        break;
                    }
                    else{
                         survive = false;
                        break;
                    }
                  
                }
                if(survive == true){
                       st.push(asteroids[i]);
                }
               

              
            }

        }
       vector<int> ans ;
       while(! st.empty()){
        ans.push_back(st.top());
        st.pop();
       }

       reverse(ans.begin(),ans.end());

       return ans;
       
        
    }
};