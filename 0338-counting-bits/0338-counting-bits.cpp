class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans ;

        for(int i = 0 ; i<= n ; i++)
        {
        int x = i ;
        int count = 0;
        while(x > 0){
            if(x %2  == 1)count++;
            x /= 2 ;

        }
        ans.push_back(count);
        }
        return ans ;
    }
};