class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st ;

        for(int i = 0 ; i < tokens.size(); i++){
            string x = tokens[i] ;
           
            if( x != "+" && x != "*" && x != "-" && x != "/" ){
                st.push(stoi(x));
            }
            else{
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int ans ;
            if (x == "+") ans = b + a;
                else if (x == "-") ans = b - a;
                else if (x == "*") ans = b * a;
                else if (x == "/") ans = b / a;

                st.push(ans);

            }

                

            
        }


       return  st.top();
        

        
    }
};