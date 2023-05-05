class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg=0,cg=0,start=0,curr=0;
        for(int i=0;i<gas.size();i++)
            tg+=gas[i];
        for(int i=0;i<cost.size();i++)
            cg+=cost[i];
        if(cg>tg)
            return -1;
        for(int i=0;i<cost.size();i++){
            curr+=(gas[i]-cost[i]);
            if(curr<0){
                start=i+1;
                curr=0;
            }
        }
        return start;
    }
};