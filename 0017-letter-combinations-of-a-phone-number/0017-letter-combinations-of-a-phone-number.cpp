class Solution {
public:
void solve(string digit,vector<string>&ans,string output,int index,string mapping[])
{
    if(index>=digit.length())
    {
        ans.push_back(output);
        return ;
    }
    int number=digit[index]-'0';
    string mapped=mapping[number];
    for(int i=0;i<mapped.length();i++)
    {
        char ch=mapped[i];
        output.push_back(ch);
        solve(digit,ans,output,index+1,mapping);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.size()==0)
        return ans;
        solve(digits,ans,output,index,mapping);
        return ans;
        
    }
};