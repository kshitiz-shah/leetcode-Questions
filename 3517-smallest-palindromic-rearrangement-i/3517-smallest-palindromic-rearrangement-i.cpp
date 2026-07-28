class Solution {
public:
    string smallestPalindrome(string s) {

      vector <int> freq(26 ,0);
      for(char x :s){
        freq[x-'a'] +=1 ;
      }
      int l = 0 ;
      int r = s.size()-1 ;

      for(int i = 0 ;i < 26 ;i++){
        
        while(freq[i] > 0){
            char ch = i + 'a';
            if(freq[i] != 1){
                
                s[l++] = ch ;
                s[r--] =ch ;
                freq[i] -= 2 ;
            }else{
                 s[s.size()/2] = ch ;
                 freq[i] -= 1 ;
            }
        }
      
      
      
      }
      return s ;
        
    }
};