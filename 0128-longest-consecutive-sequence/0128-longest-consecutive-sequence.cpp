class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int num:nums)
            s.insert(num);
        int ls=0;
        for(int num:nums){
            if(!s.count(num-1)){
                int currnum=num;
                int currstreak=1;
                while(s.count(currnum+1)){
                    currnum++;
                    currstreak++;
                }
                ls=max(ls,currstreak);
            }
            
        }
        return ls;
    }
};