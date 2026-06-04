class Solution {
public:
    int totalWaviness(int num1, int num2) {

       
        long long waviness = 0 ;

        for(int i = num1 ;i <= num2 ;i++){
            string k = to_string(i);

            for(int j = 1 ; j< k.size()-1 ;j++){
                if((k[j]> k[j-1]) &&  (k[j] > k[j +1]) ||  (k[j]< k[j-1]) &&  (k[j] < k[j +1])){
                    waviness++ ;
                }
            }
        }

        
       return waviness ; 
    }
};