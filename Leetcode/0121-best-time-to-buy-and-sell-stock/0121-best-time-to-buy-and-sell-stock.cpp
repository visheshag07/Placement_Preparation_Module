class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            minimum=min(minimum,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minimum);
        }
        return maxprofit;
    }
};