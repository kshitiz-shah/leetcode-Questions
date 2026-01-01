class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int  i = n-1;
        
      
             while(digits[i] == 9){
             digits[i] = 0;
             if(i == 0){
                digits.insert(digits.begin(),1);
                return digits;
             }else{
                i--;
             }

        }
         digits[i] += 1;
            return digits;

        
    }
};