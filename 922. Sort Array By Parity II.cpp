// class Solution {
// public:
//     vector<int> sortArrayByParityII(vector<int>& nums) {
        
//         vector <int> res_eve, res_odd, res;
        
//         for (int i = 0; i < nums.size(); i++){
            
//             if (nums[i] % 2 == 0){
//                 res_eve.push_back(nums[i]);
//             }
//             else if (nums[i] % 2 != 0){
//                 res_odd.push_back(nums[i]);
//             }
//         }
        
//         for (int i = 0; i < nums.size()/2; i++){
//             res.push_back(res_eve[i]);
//             res.push_back(res_odd[i]);
//         }
        
//         return res;
//     }
// };

// Approch 2:

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector <int> res(nums.size());
        int eve_ptr = 0, odd_ptr = 1;
        
        for (int i = 0; i < nums.size(); i++){
            
            if (nums[i] % 2 == 0){
                res[eve_ptr] = nums[i];
                eve_ptr += 2;
            }
            else if (nums[i] % 2 != 0){
                res[odd_ptr] = nums[i];
                odd_ptr += 2;
            }
        }
        
        return res;
    }
};
