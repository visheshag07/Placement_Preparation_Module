class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        
        unordered_map<int ,int>mp;
   

        int n= nums.size();

        for(int i=0;i<n;i++)
        {
            int sum=target-nums[i];


            if(mp.find(sum)==mp.end())
            {
                 mp[nums[i]]=i;
            }
            
            else
                  return { i, mp[sum]};

            
        }
        
      return {-1,-1};


    }
};