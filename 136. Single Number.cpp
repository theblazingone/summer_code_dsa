class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map <int, int> mp;
        int ans;
        
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for (auto num: mp){
            if (num.second == 1){
                ans = num.first;
            }
        }
        
        return ans;
    }
};