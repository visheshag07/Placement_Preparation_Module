class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        vector<int>freq(256,0);
        vector<bool>taken(256,false);
        for(int i=0;i<n;i++)
        freq[s[i]]++;

        stack<char>stk;
        stk.push(s[0]);
        freq[s[0]]--;
        taken[s[0]]=true;
        for(int i=1;i<n;i++)
        {
            if(taken[s[i]]==true)
            {
               freq[s[i]]--;
            }
            else
            {
                while(!stk.empty()&&stk.top()>s[i]&&freq[stk.top()]>0)
                {
                    taken[stk.top()]=false;
                    stk.pop();
                }
                stk.push(s[i]);
                freq[s[i]]--;
        taken[s[i]]=true;
            }
        }
        string ans="";
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};