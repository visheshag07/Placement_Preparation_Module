class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // int min=nums[0];
        // int max=nums[nums.size()-1];
        // if()
        if(n<=2)
        return -1;
        return nums[1];
    }
};