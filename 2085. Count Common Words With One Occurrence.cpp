class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int n = words1.size(), m = words2.size();
        unordered_map <string, int> mp;
        int ans = 0;
        
        for (int i = 0; i < n; i++){
            mp[words1[i]]++;
        }
        for (int i = 0; i < m; i++){
            if (mp[words2[i]] < 2){
                mp[words2[i]]--;
            }
        }
        
        for (auto it: mp){
            if (it.second == 0){
                ans++;
            }
        }
        
        return ans;
    }
};