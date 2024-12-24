class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candycount(n, 1);

        candycount[0]=1;

        for(int i = 1 ;i< ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                candycount[i] = (candycount[i-1] +1) ;

            }
            
        }

        int sum = candycount[ratings.size()-1] ;
        
        for(int i = ratings.size()-2 ; i>= 0 ;i--){
            if(ratings[i] > ratings[i+1]){
                candycount[i] =  max(candycount[i] ,(candycount[i+1] +1) );
              

            }
              sum += candycount[i];
        }

    return sum;
        
    }
};