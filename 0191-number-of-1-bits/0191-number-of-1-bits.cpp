class Solution {
public:
    int hammingWeight(int n) {
          int count = 0 ;
        while(n > 0){
          int temp=  n % 2 ;
          if(temp == 1)count++;
          n /= 2;

        }
        return count ;
        
    }
};