class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      // vector<int>result;
      vector<vector<int>>result;
       int n=intervals.size();
       int j=0;
       sort(intervals.begin(),intervals.end());
       if(n==0)
       return result;
       result.push_back(intervals[0]);
       for(int i=0;i<n;i++)
       {
           if(result[j][1]>=intervals[i][0])
           {
            result[j][1]=max(result[j][1],intervals[i][1]);
           }
           else
           {
               //j++;
               result.push_back(intervals[i]);
               j++;
           }
       } 
       return result;
    }
};