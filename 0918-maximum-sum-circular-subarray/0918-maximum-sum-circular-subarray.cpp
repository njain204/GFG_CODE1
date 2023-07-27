class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best_sum=INT_MIN;
        int cur_sum=0;
        for (int x:nums){
            cur_sum=max(x, cur_sum+x);
            best_sum=max(cur_sum, best_sum);
        }
        return best_sum;
    }
    int minSubArray(vector<int>& nums) {
        int worst_sum=INT_MAX;
        int cur_sum=0;
        for (int x:nums){
            cur_sum=min(x, cur_sum+x);
            worst_sum=min(cur_sum, worst_sum);
        }
        return worst_sum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums. size();
        if (n==1) return nums[0];
        int totalsum=accumulate(nums.begin(), nums.end(), 0);
        int maxsum=maxSubArray(nums);
        int minsum=minSubArray(nums);
        return (totalsum==minsum)?maxsum:max(maxsum, totalsum-minsum);
    }
};