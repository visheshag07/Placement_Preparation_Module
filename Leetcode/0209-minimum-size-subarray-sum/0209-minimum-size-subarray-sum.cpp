class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i=0,j=0;
       int current=0;
       int mx=INT_MAX;
       while(j<nums.size())
       {
           current+=nums[j];
           while(current>=target)
           {
               mx=min(j-i+1,mx);
               current-=nums[i];
               i++;

           }
           j++;
 
       } 
       if(mx==INT_MAX)
       return 0;
       return mx;
    }
};