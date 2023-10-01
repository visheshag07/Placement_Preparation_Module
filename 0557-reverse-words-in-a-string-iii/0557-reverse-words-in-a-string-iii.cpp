class Solution {
public:
    string reverseWords(string s) {
        string word;
        string result="";
        for(char ch:s)
        {
            if(ch!=' ')
            word+=ch;
            else
            {
                reverse(word.begin(),word.end());
                result+=word+" ";
                word="";
            }
        }
          reverse(word.begin(),word.end());
          result+=word;
          return result;
    }
};