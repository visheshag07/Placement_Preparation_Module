class Solution {
public:
    int firstoccurence(vector<int> &nums,int low,int high,int target){
        if(low>high)
        return -1;
        int mid=(low+high)/2;
        if(nums[mid]>target)
         return firstoccurence(nums,low,mid-1,target);
        else if(nums[mid]<target)
         return firstoccurence(nums,mid+1,high,target);
        else
        {
            if(mid==0||nums[mid]!=nums[mid-1])
            return mid;
            else
           return firstoccurence(nums,low,mid-1,target);
        }
    }
     int lastoccurence(vector<int> &nums,int low,int high,int target){
         int n=nums.size();
        if(low>high)
        return -1;
        int mid=(low+high)/2;
        if(nums[mid]>target)
       return lastoccurence(nums,low,mid-1,target);
        else if(nums[mid]<target)
      return  lastoccurence(nums,mid+1,high,target);
        else
        {
            if(mid==n-1||nums[mid]!=nums[mid+1])
            return mid;
            else
          return  lastoccurence(nums,mid+1,high,target);
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int low=0;
        int high=n-1;
        int firstoccur=firstoccurence(nums,low,high,target);
        int lastoccur=lastoccurence(nums,low,high,target);
        ans.push_back(firstoccur);
        ans.push_back(lastoccur);
        return ans;
        
           }
};