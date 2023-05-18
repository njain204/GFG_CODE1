class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         vector<int> rows(matrix.size());
        vector<int> col(matrix[0].size());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                   rows[i]=999;
                   col[j]=999;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                  if(rows[i]==999 )
                  {
                      matrix[i][j]=0;
                  }
                  if(col[j]==999)
                  {
                     matrix[i][j]=0;
                  }
                
            }
        }
    }
};