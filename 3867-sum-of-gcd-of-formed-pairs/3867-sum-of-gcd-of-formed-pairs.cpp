class Solution {
public:
    long long gcdSum(vector<int>& nums) {
       int n = nums.size();
        vector <int> maxgrid(n , 0);
        int maxi = 0 ;

        for(int i = 0 ; i< n ;i++){
            maxi = max(maxi , nums[i]);
            maxgrid[i] = maxi ;
        }

        for(int  i = 0; i < n ;i++){
            maxgrid[i] = gcd(nums[i] , maxgrid[i]);
        }

        sort(maxgrid.begin() , maxgrid.end());
        
        long long sum = 0 ;

        int left = 0 ;
        int right = n-1; 

        while(left < right){
            sum +=  gcd(maxgrid[left] ,maxgrid[right]);
            left++ ;
            right-- ;
        }

        return sum ;

        
    }
     int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if(a > b) a = a% b ;
        else  b = b% a;
    }
   return (a == 0)?b:a ;
}
  
};