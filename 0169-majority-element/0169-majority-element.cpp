class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxval=nums[0];
        for(auto x:mp)
        {
            if(x.second>mp[maxval])
                maxval=x.first;
        }
        return maxval;
    }
};