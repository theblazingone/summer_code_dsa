class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int l = 0, cnt = 0, ans = 0;
        for (int i = 0; i < words.size(); i++){
            
            l = 0, cnt = 0;
            for (int j = 0; j < words[i].size(); j++){
                if (j < pref.length()){
                    if (words[i][j] == pref[l]){
                        cnt++;
                    }
                    l++;
                }
            }
            
            if (cnt == pref.length()){
                ans++;
            }
        }
        
        return ans;
    }
};