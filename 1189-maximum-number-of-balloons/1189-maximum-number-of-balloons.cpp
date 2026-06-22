class Solution {
public:
    int maxNumberOfBalloons(string text) {

        int hash[26]={0};

        for(char x : text){
            hash[x - 'a']++;
        }

        string s = "ballon";
       int ans = INT_MAX;
        hash['l' -'a'] /= 2 ;
      hash['o' - 'a'] /= 2 ;

        for(char k : s){
            
            ans = min(ans , hash[k-'a']);
            
        }
        return ans ;

        
    }
};