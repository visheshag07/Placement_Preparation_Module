class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i-1]==nums[i])
            continue;
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0)
                {
                    answer.push_back({nums[i],nums[low],nums[high]});
                    while(low<high&&nums[low]==nums[low+1])
                    low++;
                    while(low<high&&nums[high]==nums[high-1])
                    high--;
                    low++;
                    high--;



                }
                else if(sum>0)
                high--;
                else
                 low++;
            }
        }
        return answer;
    }
};