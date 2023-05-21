class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int cnt = 0;
        int total = row*col;
        int sR = 0;  
        int sC = 0;  
        int eR = row -1;  
        int eC = col-1;  
        while(cnt < total){
            for(int index = sC; cnt < total && index <= eC; index++){
               ans.push_back(matrix[sR][index]);
               cnt++;
            }
            sR++;
            for(int index = sR; cnt < total && index <= eR; index++){
               ans.push_back(matrix[index][eC]);
               cnt++;
            }
            eC--;
            for(int index = eC; cnt < total && index >= sC; index--){
               ans.push_back(matrix[eR][index]);
               cnt++;
            }
            eR--;
            for(int index = eR; cnt < total && index >= sR; index--){
               ans.push_back(matrix[index][sC]);
               cnt++;
            }
            sC++;
       }
    return ans;
    }
};