class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {

      int prefixsum = 0 + values[0] ;
        int n= values.size();
       int maxsum =0;

        for(int i=1 ;i< values.size() ;i++){

            maxsum = max(maxsum , prefixsum + values[i] -i);

            prefixsum  = max(prefixsum , values[i] + i );


        }



       

        return maxsum ;
        
    }
};