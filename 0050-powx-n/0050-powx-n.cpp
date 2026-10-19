class Solution {
public:
    double myPow(double x, int n) {

        double ans=1;
        long long exp=n;
        if(exp<0){
            exp=-1 *exp;
        }
        while(exp){
            if(exp%2 != 0){
                ans=ans*x;
                exp=exp-1;
            }else{
                x=x*x;
                exp=exp/2;
            }
            
        }
        if(n<0){
            ans=1/ans;
        }
        
     return ans;   
    }
};