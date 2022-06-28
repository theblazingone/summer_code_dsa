class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector <int> arr_sum_zero;
        
        for (int i = 1; i < (n/2) + 1; i++){
            arr_sum_zero.push_back(i);
            arr_sum_zero.push_back(-i);
        }
        
        if (n % 2 != 0){
            arr_sum_zero.push_back(0);
        }
        
        return arr_sum_zero;
    }
};