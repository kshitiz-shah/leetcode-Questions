class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        stack <int> st;
        int num =1;
        vector<string> ans;
        int k = target.size();

        while(true){
            if(num <= n && num <= n){
                st.push(num);
                ans.push_back("Push");
                if(find(target.begin(),target.end(),num) == target.end()){
                    ans.push_back("Pop");
                }
             if(num == target[k -1]){
                break ;
             }

                num++;
            }



            

        }
        return ans;
       

        
        
    }
};