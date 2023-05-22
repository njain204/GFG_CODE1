class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)
            return 0;
        sort(points.begin(),points.end());
        int arrow=1;
        int last=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]>last)
            {
                arrow++;
                last=points[i][1];
            }
            else last = min(last, points[i][1]);
        }
        return arrow;
    }
};