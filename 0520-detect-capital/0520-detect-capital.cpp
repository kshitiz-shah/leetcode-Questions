class Solution {
public:
    bool detectCapitalUse(string word) {

        bool small = false ;
        bool cap =  false ;
        bool first = false ;
        if(word.size() ==1)return true ;
        if(word[0] >= 'A' && word[0] <= 'Z')first = true ;

       for(int i = 1 ; i< word.size() ;i++){
         
        if( word[i] >= 'a' && word[i] <= 'z'){
            small = true ;
        }
        else{
            cap = true ;
        }
       }

       if( cap == true && small == false && first == true)return true ;
       if( cap == false && small == true )return true ;

       if(cap == true && small == true)return false ;
          
    

       return false ;

        
    }
};