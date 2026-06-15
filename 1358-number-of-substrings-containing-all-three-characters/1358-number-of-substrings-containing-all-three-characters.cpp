class Solution {
public:
    int numberOfSubstrings(string s) {

        int left = 0 ;
        int right = 0 ;
        int ans = 0 ;
        int n = s.size();

        unordered_map <char ,int> mpp;

        while( right < n){
            mpp[s[right]]++ ;
            while(mpp.size() == 3){
                ans += n - right  ;
                if(mpp[s[left]] == 1)mpp.erase(s[left]);
                else{
                      mpp[s[left]]-- ;

                }
              
                
                left++;
            }
            right++ ;
        }

       return ans ; 
        
    }
};