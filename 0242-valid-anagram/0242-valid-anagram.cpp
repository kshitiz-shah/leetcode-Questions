class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size() != t.size())return false;
        unordered_map <char ,int> mpp ;

        for(auto x: s){
            mpp[x]++;
        }
        for(auto x : t){
            mpp[x]-- ;
            if(mpp[x] < 0)return false ;
        }

       return true ;  
        
    }
};