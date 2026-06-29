class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {

        int count = 0 ; 

        for(int i = 0 ; i < patterns.size() ;i++){
          

            string s = patterns[i];
            // if(s.size() > j.size())continue;

            

                if(word.find(s) != string::npos){
                    count++;
                }

            
        }
        return count ;
        
    }
};