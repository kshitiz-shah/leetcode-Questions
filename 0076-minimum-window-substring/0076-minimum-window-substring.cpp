class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char ,int> mpp ;

        for(auto x : t){
            mpp[x]++;
        }

        int left = 0;
        int right = 0;
        int count = 0 ;
        int ind = -1 ; 
        int minlength = INT_MAX ;
        

    while(right < s.size()){

        char x = s[right];
        mpp[x]-- ;
        if(mpp[x] >= 0)count++;

        while(count == t.size()){
           if(right -left + 1 < minlength){
            minlength = right- left +1 ;
            ind = left ;
           }
            mpp[s[left]]++ ;

            if(mpp[s[left]] > 0)count-- ;
            left++ ;
          
        }
        right++;

    }
     if(ind == -1)return "";
    return s.substr(ind , minlength);


       
        
    }
};