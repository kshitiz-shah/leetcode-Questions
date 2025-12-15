class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        int ans = 0 ;

        int n = tickets.size();
         
       int i = 0 ;

       while(true){

         
      if(tickets[i] > 0){
        tickets[i] -= 1;
       
        ans++;

      }
        
        if(tickets[k] == 0) break ;

        i++;
         if(i == n)i =0;
        

       }
       return ans;
        
    }
};