class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {

        int left = 0 ;
        int right = nums.size()-1;
        bool aliceturn = true ;

      int ans =  solve(left , right , nums,aliceturn);
        if(ans >= 0)return true ;
        return false ;

        
    }
    long long solve(int left ,int right, vector <int> & nums, bool aliceturn){

        if(left > right)return 0;
       long long ans = 0 ;
        if(aliceturn){
            ans +=  max(nums[left] + solve(left+ 1 , right , nums,false),
             nums[right] + solve(left ,right-1 , nums ,false));

        }
        else{
            ans -= max(nums[left] + solve(left+ 1 , right , nums,false),
             nums[right] + solve(left ,right-1 , nums ,false));
        }

        return ans ;

    }
};