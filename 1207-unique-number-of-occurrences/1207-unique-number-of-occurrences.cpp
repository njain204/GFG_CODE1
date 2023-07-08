class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            auto temp=st.emplace(it.second);
            if(!temp.second) return false;
        }
        return true;
    }
};