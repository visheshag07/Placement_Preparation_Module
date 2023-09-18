class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int len=INT_MIN;
    if(n==0)
    return 0;
    unordered_set<int>st;

    int right=0;
    for(int left=0;left<n;left++)
    {
        if(st.find(s[left])!=st.end())
        {
            while(st.find(s[left])!=st.end()&&right<left)
            {
                st.erase(s[right]);
                right++;
            }
        }
        st.insert(s[left]);
        //left++;
        len=max(len,left-right+1);
    }
    return len;

        
    }
};