class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {

        int n = nums.size();
        bool aliceturn = true ;

      if(  solve(0 , n-1 , nums ,aliceturn) >= 0 ) return true;
      return false;


        
    }
    int solve(int left , int right , vector <int> &nums, bool aliceturn){

        if(left > right)return 0; 

        if(aliceturn){
            return max(nums[left] + solve(left +1 , right , nums, false) , nums[right] + solve(left , right -1 ,nums, false));
        }else{
            return min( - nums[left] + solve(left+1 , right , nums, true) , -nums[right]+ solve(left ,right -1 ,nums ,true));
        }



    }
};