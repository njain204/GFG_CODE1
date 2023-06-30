class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
         int m=size(flowerbed), planted = 0;
        for (int i=0; i<m; ++i)
            if (!flowerbed[i] &&
                (i==0 || !flowerbed[i-1]) &&
                (i==m-1 || !flowerbed[i+1]))
                flowerbed[i] = 1, ++planted;
        return planted >= n;
    }
};