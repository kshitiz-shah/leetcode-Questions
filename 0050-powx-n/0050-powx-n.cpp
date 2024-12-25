class Solution {
public:
    double myPow(double x, int n) {
        //your code goes here
       
      
      if(n<0){
       return  (1.0/findpower(x , -(long long)n ));

      }
        
return findpower(x,n);
    }

private:
  double findpower(double x , long long n){
    if(n==0)return 1.0;
    if(n==1)return x;

    if( n% 2 == 1){
    return  x* findpower(x*x , n/2);
    }
    else{
     return  findpower(x*x , n/2);
    }

  }
};