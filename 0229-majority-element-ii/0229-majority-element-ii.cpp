class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int>answer;
         int cnt1=0;
         int cnt2=0;
         int element1=INT_MIN;
         int element2=INT_MIN;
         for(int i=0;i<nums.size();i++)
         {
             if(cnt1==0&&element2!=nums[i])
             {
                 cnt1=1;
                 element1=nums[i];
             }
            else if(cnt2==0&&element1!=nums[i])
             {
                 cnt2=1;
                 element2=nums[i];
             }
             else if(nums[i]==element1)
             cnt1++;
             else if(nums[i]==element2)
             cnt2++;
             else
             {
                 cnt1--;
                 cnt2--;
             }


         }
         int mini=(nums.size()/3)+1;
         int count1=0;
         int count2=0;
         for(int i=0;i<nums.size();i++)
         {
             if(nums[i]==element1)
             count1++;
             else if(nums[i]==element2)
             count2++;
             
         }
         if(count1>=mini)
         answer.push_back(element1);
         if(count2>=mini)
         answer.push_back(element2);
         return answer;
    }
};