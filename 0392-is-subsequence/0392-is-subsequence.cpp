class Solution {
public:
    bool isSubsequence(string s, string t) {

        int ptr1 =0 ;
        int ptr2 =0;
        int count  = s.size(); 

        while(ptr1 < s.size() && ptr2 < t.size()){
           
           if(s[ptr1] == t[ptr2]){
            count--;
            ptr1++;
            ptr2++;
           }
           else{
            ptr2++;

           }


        }
        if(count == 0)return true ;
        else return false ;

        
    }
};