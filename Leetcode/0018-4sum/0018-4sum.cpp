class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>>answer;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                continue;
                int low=j+1;
                int high=n-1;
                while(low<high){
                long long sum=nums[i];
                sum+=nums[j];
                sum+=nums[low];
                sum+=nums[high];
                if(sum==target)
                {
             vector<int>temp={nums[i],nums[j],nums[low],nums[high]};
             answer.push_back(temp);
             low++;
             high--;
             while(low<high&&nums[low]==nums[low-1])
             low++;
             while(low<high&&nums[high]==nums[high+1])
             high--;
                
                }
                else if(sum>target)
                high--;
                else 
                low++;
            }
        }
    }
    return answer;
    }
};