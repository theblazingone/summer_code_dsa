class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector <vector<int>> res;
        
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j++){
                res.push_back({i,j});
            }
        }
        
        sort(res.begin(), res.end(), [rCenter, cCenter](auto &x1, auto &x2){
            return (abs(x1[0] - rCenter) + abs(x1[1] - cCenter) < abs(x2[0] - rCenter) + abs(x2[1] - cCenter)); 
        });
        
        return res;
    }
};