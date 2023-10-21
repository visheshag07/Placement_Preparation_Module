class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int value=target-num;
            if(mpp.find(value)!=mpp.end())
            {
              return   {mpp[value],i};
            }
           //mpp[num]=i;
           mpp.insert({num,i});
        }
        return {-1,-1};
    }
};