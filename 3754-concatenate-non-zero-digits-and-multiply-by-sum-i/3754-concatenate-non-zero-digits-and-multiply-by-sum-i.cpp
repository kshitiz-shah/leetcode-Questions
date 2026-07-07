class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0 )return 0 ;
        string ans = "" ;
        int count = 0;


        string k = to_string(n);

        for(char x : k){
            if(x != '0'){
                ans += x ;
                count  += (x- '0');

            }
        }

        long long finalans = stoll(ans );
        finalans *= count ;

        return finalans ;

             
    }
};