class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        if (nums.size() == 0){
            return 0;
        }
        
        int cnt = 1, ans = 0;
        for (int i = 1; i < nums.size(); i++){
            
            if (nums[i] == nums[i-1] + 1){
                cnt++;
            }
            else if (nums[i] != nums[i-1]){
                ans = max(cnt, ans);
                cnt = 1;
            }
        }
        
        ans = max(cnt, ans);
        
        return ans;
    }
};