class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        
        int n = grid[0].size(), m = grid.size();
        int res = 0;
        
        for (int i = 0; i < grid.size(); i++){    
            
            int best_row = 0, best_col = 0;
            for (int j = 0; j < grid[i].size(); j++){
                if (grid[i][j] > 0){
                    res++;
                }
                best_row = max(best_row, grid[i][j]);
                best_col = max(best_col, grid[j][i]);
            }
            res += best_row + best_col;
        }
        
        return res;
    }
};