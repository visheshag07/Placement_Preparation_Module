class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        
        long power=n;
        if(power<0)
        power*=-1;
        while(power!=0)
        {
            if(power%2==1)
            {
                ans=ans*x;
                power--;
            }
            else{
                x=x*x;
                power/=2;

            }

        }
     return   n<0?1/ans:ans;
    }
};