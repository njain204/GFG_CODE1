class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int mins=INT_MAX;
        int sum=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=tar){
                mins=min(mins,right+1-left);
                sum-=nums[left];
                left++;
                    
            }
            
        }
        
        return mins==INT_MAX?0:mins;
    }
    
};