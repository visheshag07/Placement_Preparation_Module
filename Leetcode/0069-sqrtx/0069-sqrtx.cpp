class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
        return x;
        int ans=0;
        int low=1;
        int high=x;
        while(low<=high)
        {
             long long int mid=low+(high-low)/2;
            long long int midx=mid*mid;
            if(midx==x)
            return mid;
            else if(midx>x)
            high=mid-1;
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};