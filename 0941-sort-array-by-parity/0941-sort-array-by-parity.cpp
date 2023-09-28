class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        vector<int>ans1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            ans.push_back(nums[i]);
            else 
            ans1.push_back(nums[i]);
        }
        for(int i=0;i<ans1.size();i++)
        ans.push_back(ans1[i]);
        return ans;
    }
};