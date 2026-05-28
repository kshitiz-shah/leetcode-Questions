class Solution {
public:
    int numberOfSpecialChars(string word) {
        
     unordered_set <char> up;
     unordered_set <char> bihar;
     int count = 0;

     for(char x : word){

        if(x >= 'a' && x <= 'z')bihar.insert(x);
        else up.insert(x);

     }

     for(char x = 'a' ;x <= 'z' ; x++){
         char cap = toupper(x);
         if(bihar.find(x) != bihar.end() && up.find(cap) != up.end())count++;
     }

   return count ;
        
    }
};