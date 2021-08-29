class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minItem = INT_MAX;
        int res = 0;
        
        for(int i=0; i<prices.size(); i++){
            minItem = min(minItem, prices[i]);
            res = max(res, prices[i]-minItem);
        }
        return res;
    }
};