class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        unordered_set<int>st;
        int largest=1;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt=1;
                int x=it;
              while(st.find(x+1)!=st.end())
              {
                  x=x+1;
                  cnt++;
              }
              largest=max(largest,cnt);
            }
        }
        return largest;
    }
};