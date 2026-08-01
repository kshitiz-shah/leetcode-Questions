class Solution {
public:
    int maximumWidth(vector<int>& planks) {

        unordered_map <int ,int> freq;
        unordered_map <int ,int> width;
        int ans = 0 ;


        for(auto x : planks){
            freq[x]++;
            width[x]++ ;
            ans = max(ans , freq[x]);
        }

        for(auto &it1 : freq){
            for(auto & it2 :freq){
                long long sum = it1.first + it2.first ;

                if(it1.first == it2.first){
                    width[sum]+= it1.second /2 ;
                }
                else if(it1.first < it2.first){
                     width[sum]+= min(it1.second ,it2.second);

                }
            }
        }

        for(auto &it :width){
            ans = max(it.second , ans);
        }

     return ans ;
       
        
    }
};