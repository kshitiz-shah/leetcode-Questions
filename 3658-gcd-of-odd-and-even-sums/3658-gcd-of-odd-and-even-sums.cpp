class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        long long sumodd = n*n ;
        long long sumeven = n * (n + 1) ;

       
        long long x= min(sumodd , sumeven);

        for(int i = x ; i >= 0 ; i = sqrt(i)){
            if(sumodd % i == 0 &&  sumeven % i == 0) return i;
        }

        return -1;
        
    }
};