class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int res=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[res])
            {
                count++;

            }
            else
            {
                count--;
            }
            if(count==0)
            {
                res=i;
                count=1;
            }
        }
        int count1=0;
        for(int i=0;i<nums.size();i++)
        {
        if(nums[res]==nums[i])
            {
            count1++;
            }
             if(count1>nums.size()/2)
        return nums[res];
        }
       
return -1;
        

    }
};