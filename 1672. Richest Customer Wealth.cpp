class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        vector <int> res;
        
        for (int i = 0; i < accounts.size(); i++){
            
            int sum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            res.push_back(sum);
        }
        
        return *max_element(res.begin(), res.end());
    }
};