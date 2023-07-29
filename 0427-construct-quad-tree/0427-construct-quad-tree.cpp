class Solution {
public:
    bool isAllSame(vector<vector<int>>& grid,int x,int y,int n){
         int val =grid[x][y];
         for(int i=x;i<x+n;++i){
               for(int j=y;j<y+n;++j){
                     if(grid[i][j]!=val){
                          return false;
                     }
               }
         }
         return true;
    }
    Node* solve(vector<vector<int>>& grid,int x,int y,int n){
            if(isAllSame(grid,x,y,n)){
                   return new Node(grid[x][y],true);
            }else{
                   Node* newnode = new Node(1,false);
                    newnode->topLeft = solve(grid,x,y,n/2);
                    newnode->topRight = solve(grid,x,y+n/2,n/2);
                    newnode->bottomLeft =solve(grid,x+n/2,y,n/2);
                    newnode->bottomRight = solve(grid,x+n/2,y+n/2,n/2);
                    return newnode;
            }
    }
    Node* construct(vector<vector<int>>& grid) {
           return solve(grid,0,0,grid.size());
    }
};