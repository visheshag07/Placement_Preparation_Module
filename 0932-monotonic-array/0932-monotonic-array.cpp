class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isinc=true;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                isinc=false;
                break;
            }
        }
        bool isdec=true;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                isdec=false;
                break;
            }
        }
        return isdec||isinc;
    }
};