class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int size=rowIndex+1;
        vector<int>result;
        result.push_back(1);
        long long ans=1;

        for(int i=1;i<size;i++)
        {
        ans=ans*(size-i);
        ans/=i;
        result.push_back(ans);

        }
        return result;
    }
};