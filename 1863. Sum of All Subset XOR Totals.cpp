class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        
        int bits_or = 0;
        for (auto& n: nums){
            bits_or |= n;
        }
        
        return bits_or << (nums.size() - 1);
    }
};