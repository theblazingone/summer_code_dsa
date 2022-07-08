class Solution {
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector <pair <int, int>> soldiers;
        vector <int> res;

        for (int i = 0; i < mat.size(); i++){
            
            int cnt = 0;
            for (int j = 0; j < mat[i].size(); j++){
                
                if (mat[i][j] == 1){
                    cnt++;
                }
            }
            
            soldiers.push_back( make_pair(cnt, i));
        }
        
        sort(soldiers.begin(), soldiers.end());
        
        for (int i = 0; i < k; i++){
            res.push_back(soldiers[i].second);
        }
        
        return res;
    }
};