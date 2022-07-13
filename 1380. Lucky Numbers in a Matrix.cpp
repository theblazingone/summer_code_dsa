class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        vector <int> res;
        unordered_set <int> s;
        
        for (int i = 0; i < matrix.size(); i++){
            
            int mini = INT_MAX;
            for (int j = 0; j < matrix[i].size(); j++){
                mini = min(matrix[i][j], mini);
            }
            
            s.insert(mini);
        }
        
        for (int i = 0; i < matrix[0].size(); i++){
            
            int maxi = INT_MIN;
            for (int j = 0; j < matrix.size(); j++){
                maxi = max(matrix[j][i], maxi);
            }
            
            if (s.find(maxi) != s.end()){
                res.push_back(maxi);
            }
        }
        
        return res;
    }
};