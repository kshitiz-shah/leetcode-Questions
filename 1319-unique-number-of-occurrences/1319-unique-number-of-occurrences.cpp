class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> freq ;

        for(int i= 0; i< arr.size();i++){

            freq[arr[i]]++;
            
        }

        unordered_map< int ,int > check ;

       for(auto it : freq){
        if(check.find(it.second) != check.end()){
            return false;
        }
        else{
            check[it.second]++ ;
        }
       }

        
        return true ;
      
    }
};