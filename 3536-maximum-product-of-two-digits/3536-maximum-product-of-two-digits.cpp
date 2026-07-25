class Solution {
public:
    int maxProduct(int n) {

        vector <int> arr ;
        int a = 0;
        int b = 0;

      while(n > 0){
        int rem = n %10 ;
        arr.push_back(rem);
        n/= 10 ;
      }
      int ind = -1 ;
      for(int i = 0 ; i< arr.size();i++){
         if(arr[i] > a){
            a = arr[i];
            ind = i ;
         }
      }

      for(int i =0 ; i< arr.size();i++){
        if(i != ind){
            if(arr[i] > b){
                b = arr[i];
            }
        }
      }

      return a * b ;
        
    }
};