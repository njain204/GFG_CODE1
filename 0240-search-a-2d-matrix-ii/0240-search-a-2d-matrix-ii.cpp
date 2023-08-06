class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int last=(matrix[0]).size()-1;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][last]<target || matrix[i][0]>target) continue;
            for(int start=0;start<matrix[0].size();start++){
                
            if(matrix[i][start]==target ){ return true;
              break;}
        }}
        return false;
}
};