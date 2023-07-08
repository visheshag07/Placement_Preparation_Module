class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int maxseq=1;
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
                if(nums[i]!=nums[i-1])
                {
                    if(nums[i]==nums[i-1]+1)
                    {
                        maxseq++;
                    }
                    else{
                        maxi=max(maxi,maxseq);
                        maxseq=1;
                    }
                }
        }
        return max(maxseq,maxi);
    }
};