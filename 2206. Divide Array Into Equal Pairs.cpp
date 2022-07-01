class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        vector <int> bin(501, 0);
        
        for (int i = 0; i < nums.size(); i++){
            bin[nums[i]]++;
        }
        
        bool flag = false;
        for (auto & c: bin){
            if (c % 2 == 0){
                flag = true;
            }
            else {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
};