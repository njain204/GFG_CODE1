class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        multimap<int,int,greater<int>> mult;
        for(auto it:mp){
            mult.insert({it.second,it.first});
        }
        vector<int> ans;
        int c=0;

        for(auto it:mult){
            ans.push_back(it.second);
            c++;
            if(c==k){
                break;
            }
        }
        return ans;
    }
};