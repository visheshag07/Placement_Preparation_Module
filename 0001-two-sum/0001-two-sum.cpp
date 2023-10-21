class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int final_target=target-num;
            if(mpp.find(final_target)!=mpp.end())
            {
                return {i,mpp[final_target]};
            }
            mpp.insert({num,i});
        }
        return {-1,-1};
    }
};