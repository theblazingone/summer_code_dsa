class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int sum = 0, temp, bin[101] = {0};
        for (int i = 0; i < nums.size(); i++){
            bin[nums[i]]++;
        }
        
        for (int i = 0; i < 101; i++){
            if (bin[i] == 1){
                sum += i;
            }
        }
        
        return sum;
    }
};