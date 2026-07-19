class Solution {
public:
    string smallestSubsequence(string s) {

       vector <int> freq(26, 0) ;
         vector <int> vis(26 ,0);

        for(char x : s){
            freq[x- 'a']++ ;
        }

     string ans = "";

      for(char ch : s){
        if(!vis[ch -'a']){
            while(!ans.empty() && ans.back() > ch){
                if(freq[ans.back() - 'a'] > 0){
                     vis[ans.back() - 'a'] = 0 ;
                    ans.pop_back();
                   
                    
                }else{
                    break ;
                }
            }
            vis[ch -'a'] =1;
            ans.push_back(ch);
           

        }
         freq[ch -'a'] -= 1;

      }
        return ans ;
        
    }
};