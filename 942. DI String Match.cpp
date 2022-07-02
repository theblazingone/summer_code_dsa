class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int low = 0;
        int high = s.length();
        
        vector <int> vec;
        
        for (int i = 0; i < s.length(); i++){
            
            if (s[i] == 'I'){
                vec.push_back(low);
                low++;
            }
            else {
                vec.push_back(high);
                high--;
            }
        }
        
        vec.push_back(low);
        
        return vec;
    }
};