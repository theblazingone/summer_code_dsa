class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        vector <int> squares;
        for (int i = 0; i < rectangles.size(); i++){
            squares.push_back( min(rectangles[i][0], rectangles[i][1]) );
        }
        
        sort(squares.begin(), squares.end());
        
        int cnt = 0;
        for (auto& len: squares){
            if (len == squares[squares.size()-1]){
                cnt++;
            }
        }
        
        return cnt;
    }
};