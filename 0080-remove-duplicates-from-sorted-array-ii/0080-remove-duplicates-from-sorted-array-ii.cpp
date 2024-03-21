class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int idx=0;
        for(auto x:mp){
            if(x.second==1){
                nums[idx++]=x.first;
            }else if(x.second>=2){
                nums[idx++]=x.first;
                nums[idx++]=x.first;
            }
        }
        return idx;
    }
};
