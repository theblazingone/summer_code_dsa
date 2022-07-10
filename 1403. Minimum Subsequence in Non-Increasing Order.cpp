class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        vector <int> res;
        int sum_first = 0, sum_last = 0;
        int j = nums.size() - 1;
        
        sort(nums.begin(), nums.end());
        
        if (nums.size() == 1){
            return nums;
        }
        
        for (int j = nums.size()-1; j >= 0; j--){
    
            sum_first = 0;
            sum_last += nums[j];
            
            for (int i = 0; i < j; i++){
                sum_first += nums[i];
            }
            
            res.push_back(nums[j]);
            
            if (sum_first < sum_last){
                break;
            }
        }
        
        return res;
    }
};