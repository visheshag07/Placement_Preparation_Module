class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=INT_MIN;
        int n=s.size();
        if(n==0)
        return 0;
        unordered_set<int>st;
        int left=0;
        for(int right=0;right<n;right++)
        {
            if(st.find(s[right])!=st.end())
            {
                while(left<right&&st.find(s[right])!=st.end())
                {
                    st.erase(s[left]);
                    left++;
                }
            }
            st.insert(s[right]);
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};