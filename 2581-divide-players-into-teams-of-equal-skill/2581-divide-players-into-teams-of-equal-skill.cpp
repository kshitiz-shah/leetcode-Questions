class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        long long chem = 0;
        int sum =0;
        int n= skill.size();

        for(auto x: skill){
             sum += x;

        }
         int rem;
         int pairs = n/2;
        if(sum % (n/2) != 0 )return -1;
         else{
            rem = sum / (n/2);

         }
      sort(skill.begin(),skill.end());
      int left =0;
      int right = n-1;
      while(left < right){
        if(skill[left] + skill[right] != rem)return -1;

        chem += (skill[left] *skill[right]);
        left++;
        right--;
      }

      
    return chem;
    }
};