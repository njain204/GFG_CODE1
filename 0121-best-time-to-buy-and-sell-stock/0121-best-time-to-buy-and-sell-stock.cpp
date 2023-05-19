class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
        int buyPrice=INT_MAX;
        int maxPrice=0;
        for(int i=0;i<n;i++)
        {
            buyPrice=min(buyPrice,prices[i]);
            maxPrice=max(maxPrice,prices[i]-buyPrice);
        }
        return maxPrice;
        }
    
};