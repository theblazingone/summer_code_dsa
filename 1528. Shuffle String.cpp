class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        char temp[s.length()];
        string ans = "";
        
        for (int i = 0; i < indices.size(); i++){
            temp[indices[i]] = s[i];
        }
        
        for (int i = 0; i < indices.size(); i++){
            ans += temp[i];
        }
        
        return ans;
    }
};