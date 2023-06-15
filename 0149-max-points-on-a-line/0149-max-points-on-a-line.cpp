class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxi = 0;
        for (const auto& x : points) {
            unordered_map<double, int> slopes;
            for (const auto& y : points) {
            if (x == y) continue;
            double slope = numeric_limits<double>::infinity();
            if (y[0] - x[0] != 0) {
                slope = (double) (y[1] - x[1]) / (y[0] - x[0]);
            }

            if (slopes.count(slope)) {
                slopes[slope]++;
            } else {
                slopes[slope] = 1;
            }
            maxi = std::max(maxi, slopes[slope]);
            }
        }
        return maxi + 1;
    }
};