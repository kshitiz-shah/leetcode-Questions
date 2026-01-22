class Solution {
public:
    bool isValid(string s) {

        stack <char > st ;
        
        

       for(char x : s){
            if( x == '(' || x == '{' || x ==  '['){
                st.push(x);
            }
            else{
                if(st.empty())return false;
                char k =  st.top();
                if((k =='(' && x == ')' )|| (k =='{' && x == '}' )|| (k =='[' && x == ']' ) ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
           
        }
        if(!st.empty())return false;

        return true;
    }
};