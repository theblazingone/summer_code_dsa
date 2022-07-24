class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int perimeter = 0, r = grid.size(), c = grid[0].size();
        
        for (int i = 0; i < grid.size(); i++){
            
            for (int j = 0; j < grid[i].size(); j++){
                
                if (grid[i][j] == 1){

                    if(i+1==r || (i+1<r && grid[i+1][j]==0)) perimeter++;
                    if(i-1==-1 || (i-1>=0 && grid[i-1][j]==0)) perimeter++;
                    if(j+1==c || (j+1<c && grid[i][j+1]==0)) perimeter++;
                    if(j-1==-1 || (j-1>=0 && grid[i][j-1]==0)) perimeter++;
                }
            }
        }
        
        return perimeter;
    }
};