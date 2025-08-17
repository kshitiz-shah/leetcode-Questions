class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <int ,int>  mpp ;
        int count = 0;
        int ans = 0 ;
        int ptr = 0 ;
       

        for(int i= 0;i< s.size(); i++){

            if(mpp.find(s[i]) == mpp.end()){
                count = (i - ptr  + 1 );
            }
            else{
                 for (int j = ptr ; j< i ; j++){
                    if(s[j] == s[i]){
                        ptr = j +1;
                    }
                 }
            }
            mpp[s[i]]++;
            count = (i - ptr  + 1 );

            ans = max(ans, count);
        }
        return ans ;
        
    }
};