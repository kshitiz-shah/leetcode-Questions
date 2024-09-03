class Solution {
public:
    int getLucky(string s, int k) {

        string num ="";
        for( auto it : s){
          int value = it -'a' + 1;
          num += to_string(value);
        }

        int sum =0;

        for(int i=0;i<k;i++){
              sum=0;
            for(auto x: num ){
             sum += x - '0';
            }
            num = to_string(sum);
        }

        return sum ;
    }
};