class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector <int> target;
        
        for (int i = 0; i < nums.size(); i++){
            auto pos = target.begin() + index[i];
            target.insert(pos, nums[i]);
        }
        
        return target;
    }
};