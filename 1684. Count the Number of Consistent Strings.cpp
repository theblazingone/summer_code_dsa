class Solution {
public:
    
    bool check(string s, string t){
        for (auto it: t){
            if (s.find(it) == string::npos){
                return false;
            }
        }
        
        return true;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {

        int cnt = 0;
        
        for (int i = 0; i < words.size(); i++){
            
            if (check(allowed, words[i])){
                cnt++;
            }
        }
        
        return cnt;
    }
};