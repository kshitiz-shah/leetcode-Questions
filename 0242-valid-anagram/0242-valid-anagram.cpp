class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int ,int> mpp ;

        for(char x :s){
            mpp[x]++;
        }
        for(char x :t){
            mpp[x]--;
        }

        for(auto t : mpp){
            if(t.second != 0)return false ;
        }
        return true ;
        
    }
};