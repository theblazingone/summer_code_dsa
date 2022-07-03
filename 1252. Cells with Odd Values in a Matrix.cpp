class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector <int> row(m, 0), col(n, 0);
        
        for (auto& i: indices){
            row[i[0]]++;
            col[i[1]]++;
        }
        
        int cnt = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                int val = row[i] + col[j];
                if (val % 2 != 0){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};