class Solution {
public:
    bool isPowerOfTwo(int n) {
         string binary = "";
        
        while(n>0){
            binary += to_string(n % 2) ;
            n /= 2;
        }
      //  reverse(bianry.begin() , binary.end());
        int  count = 0;
        for(int  i = 0 ; i< binary.size();i++){
            if(binary[i] == '1'){
                count ++;
            }
        }
        if(count == 1)return true ;
        return false;
    }
};