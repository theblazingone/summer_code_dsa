class Solution {
public:
    
    vector<int> shortestToChar(string s, char c) {
        
        vector <int> ans;
        vector <int> pos;
        
        for (int i = 0; i < s.length(); i++){
            if (c == s[i]){
                pos.push_back(i);
            }
        }
        
        int low;
        
        for (int i = 0; i < s.length(); i++){
            
            low = INT_MAX;
            for (int j = 0; j < pos.size(); j++){
                
                if (abs(i-pos[j]) < low){
                    low = abs(i-pos[j]);
                }
            }
            
            ans.push_back(low);
        }
        
        return ans;
    }
};