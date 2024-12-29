class Solution {
public:
    string answerString(string word, int numFriends) {

        int l = word.length();
        if(numFriends == 1)return word ;
        

        int maxsize = (l - numFriends) +1;
        int ptr = 0 ;
      
        string largest =  word.substr(ptr ,maxsize);

       for(int  i= 1 ;i< l ;i++){
        string current  = word.substr(i, maxsize);
        if(current  > largest){
            largest = current ;

        }


       }
        return largest ;
        
        
    }
};