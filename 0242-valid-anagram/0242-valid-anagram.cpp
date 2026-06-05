class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char ,int> mpp ;
        if(s.size()!= t.size())return false ;
        for(char x :s){
            mpp[x]++;
        }
        for(char x :t){
            mpp[x]--;
            if(mpp[x] <0)return false;
        }

     
        return true ;
        
    }
};