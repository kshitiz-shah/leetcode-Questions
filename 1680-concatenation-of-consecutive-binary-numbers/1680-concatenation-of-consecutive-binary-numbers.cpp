class Solution {
public:
    int concatenatedBinary(int n) {
        string s = "";
        const int MOD = 1000000007;

        for(int  i = 1 ; i <= n ;i++){
            int x = i ;
            string k = "";
            while(x > 0){
                char temp = (x % 2) + '0';
                x /= 2 ;
                k += temp ;

                

            }
            reverse(k.begin() , k.end());
            s += k ;
        }
        long long ans = 0;
      long long power = 1;   // 2^0

for(int i = s.size() - 1; i >= 0; i--){
    if(s[i] == '1'){
        ans = (ans + power) % MOD;
    }
    power = (power * 2) % MOD;
}

        return ans ;
    }
};