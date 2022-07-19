class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        vector <int> ans;
        unordered_map <int, int> mp;
        
        for (int i = 0; i < nums.size(); i++){
            
            for (int j = 0; j < nums[i].size(); j++){
                
                mp[nums[i][j]]++;
            }
        }
        
        for (auto num: mp){
            if (num.second == nums.size()){
                ans.push_back(num.first);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};