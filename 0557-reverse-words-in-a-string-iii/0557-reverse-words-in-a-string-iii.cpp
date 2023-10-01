class Solution {
public:
    string reverseWords(string s) {
      int n=s.length();
      int i=0;  
      while(i<n)
      {
         int start=i;
          while(i<n&&s[i]!=' ')
          {
              i++;
          }
          int left=start;
          int right=i-1;
          while(left<right)
          {
              swap(s[left],s[right]);
              left++;
              right--;

          }
          while(i<n && s[i]==' ')
          i++;
      }
      return s;
    }
};