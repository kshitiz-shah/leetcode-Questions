class Solution {
public:
    string capitalizeTitle(string title) {

        stringstream ss(title);
        string word ;
        string ans = "" ;

        while(ss >> word){

            for( char &k : word){
                k = tolower(k);
            }

            if(word.size() > 2){
                word[0] = toupper(word[0]);
            }

            ans += word  + " " ;
        }
        ans.pop_back();



    return ans;
        
    }
};