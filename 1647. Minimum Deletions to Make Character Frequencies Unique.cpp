class Solution {
public:
    int minDeletions(string s) {
        
        vector <int> bin(26, 0);
        
        for (int i = 0; i < s.length(); i++){
            bin[s[i] - 97]++;
        }
        
        sort(bin.begin(), bin.end());
        
        int cnt = 0;
        for (int i = 24; i >= 0; i--){

            if (bin[i]){
                if (bin[i] >= bin[i+1]){
                    int temp = bin[i];
                    bin[i] = max(0, bin[i+1]-1);
                    cnt += temp - bin[i];
                }
            }
            else {
                break;
            }
        }
        
        return cnt;
    }
};