class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        vector<int >v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                v.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        for(int i=0;i<v2.size();i++)
            nums[i]=v2[i];
         for(int i=v2.size();i<v.size()+v2.size();i++)
            nums[i]=v[i-v2.size()];
    }
};