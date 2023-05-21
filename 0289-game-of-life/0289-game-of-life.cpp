class Solution {
public:
     int checkAllDirection(vector<vector<int>>& board, int row, int col, int n, int m, 
    vector<vector<int>>& visited, int dxdy[8][2]){
        int count = 0;
        
        for(int i=0; i<8; i++){
            int newrow = row + dxdy[i][0];
            int newcol = col + dxdy[i][1];

            if(newrow>=0 && newcol>=0 && newrow<n && newcol<m && board[newrow][newcol] == 1){
                count++;
            }
        }
        return count;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited = board;
        int dxdy[8][2] = {{-1,-1}, {-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int count = checkAllDirection(board, i, j, n, m, visited, dxdy);
                if(count < 2 && board[i][j] == 1){
                    visited[i][j] = 0;
                }
                else if((count == 2 || count == 3) && board[i][j] == 1){
                    visited[i][j] = 1;
                }
                else if(count > 3 && board[i][j] == 1){
                    visited[i][j] = 0;
                }
                else if(count == 3 && board[i][j] == 0){
                    visited[i][j] = 1;
                }
            }
        }
        board = visited;
    }
};