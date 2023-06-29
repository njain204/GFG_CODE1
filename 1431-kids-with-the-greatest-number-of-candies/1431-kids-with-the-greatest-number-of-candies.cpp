class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ec) {
        int max =INT_MIN;
        vector<bool>ans;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>max)
                max=candies[i];
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+ec>=max)
                ans.push_back(true);
            else 
                ans.push_back(false);
        }
        return ans;
    }
};