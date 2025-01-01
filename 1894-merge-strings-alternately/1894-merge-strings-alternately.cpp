class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ="";
        int index = 0;
        for(int  i= 0; i< min(word1.size(),word2.size());i++){
            ans += word1[i] ;
            ans += word2[i];
            index =i ;
        }

        for(int i = index + 1 ; i < max(word1.size(),word2.size());i++){
           if(word1.size() >word2.size()){
            ans += word1[i];
           }
           else {
             ans += word2[i];
           }
        }

    return ans ;
        
    }
};