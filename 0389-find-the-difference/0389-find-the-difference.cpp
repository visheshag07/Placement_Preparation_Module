class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>vt(26);
        for(auto ch:t)
        {
            vt[ch-'a']++;
        }
        for(auto ch:s)
        vt[ch-'a']--;

        for(int i=0;i<26;i++)
        if(vt[i]!=0)
        return (char)(i+'a');

        return '*';
    }
};