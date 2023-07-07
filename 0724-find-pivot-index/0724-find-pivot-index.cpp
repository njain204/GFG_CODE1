class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int totalSum = 0;
        for(int i = 0; i<nums.size(); i++){
            totalSum += nums[i];
        }

        int leftSum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == totalSum - 2*leftSum){
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};