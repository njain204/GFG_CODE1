class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       if(nums.size()==1)
           return (double)nums[0];
        int start=0;
        int end=k;
        double maxi=INT_MIN;
        double avg=0;
        for(int i=0;i<k;i++){
            avg=avg+(double)nums[i]/k;
        }
        maxi=avg;
        while(end<nums.size()){
        avg=avg-(double)nums[start++]/k;
            avg=avg+(double)nums[end++]/k;
            maxi=max(maxi,avg);
            }
        return maxi;
    }
};
