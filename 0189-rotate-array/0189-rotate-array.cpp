class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v,u;
        int l=nums.size();
        k=k%l;
        for(int j=l-k;j<l;j++)
            v.push_back(nums[j]);
        for(int i=0;i<l-k;i++)
            u.push_back(nums[i]);
        for(int i=0;i<l;i++){
            if(i<k)
            nums[i]=v[i];
            else
                nums[i]=u[i-k];
        }
    }
};