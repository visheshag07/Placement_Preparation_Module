class Solution {

public:
void solve(vector<int>nums,vector<int>output,vector<vector<int>>& ans,int index)
{
    if(index>=nums.size())
    {
        ans.push_back(output);
        return ;

    }
    //exclude
    solve(nums,output,ans,index+1);
    //include
    int element =nums[index];
    output.push_back(element);
    solve(nums,output,ans,index+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output;
        vector<vector<int>>ans;
        int index=0;
        solve(nums,output,ans,index);
        return ans;
        
    }
};