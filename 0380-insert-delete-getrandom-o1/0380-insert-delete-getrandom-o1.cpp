class RandomizedSet {
public:
vector<int>ans;
unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    bool insert(int val) {
       if(mp.find(val)==mp.end()){
        ans.push_back(val);
        mp[val]=ans.size()-1;
        }
        else return false;
        return true;
    }
    bool remove(int val) {
        if(mp.find(val)!=mp.end()){
            mp[ans.back()]=mp[val];
         swap(ans.back(),ans[mp[val]]);
         ans.pop_back();
        mp.erase(val);
        }
        else return false;
        return true;
    }  
    int getRandom() {
        return ans[rand()%ans.size()];
    }
};