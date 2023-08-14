class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int>> minh;
        int n = v.size();

        for(int i = 0;i < n;i++){
             minh.push(v[i]);
            if(minh.size()>k){
                minh.pop();
            }
        }
        return minh.top();
    }
};