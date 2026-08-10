class Solution {
public:
    bool predictTheWinner(vector<int>& piles) {
          int right = piles.size()-1;

          bool aliceturn=  true ;
    int k = solve(0 , right , piles , true);
    if(k >= 0 )return true ;
    return false ;
        
    }

    int solve(int left , int right , vector <int> &piles , bool aliceturn){

        if(left > right)return 0 ;
        int ans = 0 ;
        if(aliceturn){
            ans += max(piles[left] + solve(left +1 , right , piles , false) , piles[right] + solve(left , right -1 , piles, false));

        }else{
            ans += min(-piles[left] + solve(left +1 , right , piles , true) , -piles[right] + solve(left , right -1 , piles, true) );


        }
        return ans ;
        
    }
};