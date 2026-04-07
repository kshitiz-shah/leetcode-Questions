class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size())return false ;

        vector<int> first(128 , 0);
        vector <int> second(128,0);

        for( int i = 0 ; i< s.size();i++){
            first[s[i]]++;
            second[t[i]]++;
        }
        
        for(int i = 0 ;i < 128 ;i++){
            if(first[i] != second[i]) return false;
        }

     return true ;
        
    }
};