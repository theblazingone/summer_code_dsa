class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(nums.begin(), nums.end());
        for (int j = 0; j < nums.size(); j++){
            
            if (original == nums[j]){
                original *= 2;
            }
        }
        
        return original;
    }
};