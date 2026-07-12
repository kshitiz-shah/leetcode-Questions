class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size()-1;
        while(n >= 0  && digits[n] == 9 ){
            digits[n] =0;
            n-- ;
        }
        if(n >= 0)digits[n] += 1 ;
        if(n < 0) digits.insert(digits.begin() ,1);
        return digits ;
        
    }
};