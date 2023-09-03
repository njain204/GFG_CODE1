class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int mindiff=INT_MAX;
        int csum=0;
         sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
             int start=i+1;
        int end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                int diff=abs(target-sum);
                if(diff<mindiff){
                    mindiff=diff;
                csum=sum;
                }
                if(sum==target){
                    csum=sum;
                goto label;
            }
                else if(sum<target){
                    start++;
                }
                else
                    end--;
                
            }
            
        }
        label:
        return csum;
    }
};