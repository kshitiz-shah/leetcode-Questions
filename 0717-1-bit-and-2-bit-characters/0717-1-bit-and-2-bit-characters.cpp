class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int i = 0;
       int n = bits.size();

       while( i < bits.size()){
        if(i == n-1 )return true;
        if( i == n) return false;
        if( bits[i] == 0){
            i++;
        }
        else{
            i+= 2;
        }

       }
       return false;
    }
};