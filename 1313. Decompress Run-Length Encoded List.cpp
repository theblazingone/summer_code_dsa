class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector <int> res;
        
        for (int i = 0; i < nums.size()-1; i+=2){
            
            while(nums[i]){
                res.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        
        return res;
    }
};