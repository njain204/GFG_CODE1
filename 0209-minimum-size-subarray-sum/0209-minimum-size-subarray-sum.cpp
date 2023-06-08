class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
         long long sum=0;
        int i=0,j=0, ans=INT_MAX;
        int n = nums.size();
        while(j<n and i<n)
        {
            while(sum<tar and j<n)
            {
                sum+=nums[j];
                j++;
            }
            if(sum>=tar)
            {
                ans=min(ans, j-i);
                sum-=nums[i];
                i++;
                if(sum>=tar)
                ans=min(ans, j-i);
            }
        }
        while(i<n and sum>tar and sum-nums[i]>=tar)
        {sum-=nums[i]; i++; ans=min(ans, j-i);}
        
        return ans==INT_MAX?0:ans;
    }
    
};