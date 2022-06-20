class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int total_sum = 0;
        
        for (int i = 0; i < arr.size(); i++){
            
            int current_sum = 0;
            for (int j = i; j < arr.size(); j++){
                
                current_sum += arr[j];
                if ((j-i) % 2 == 0){
                    
                    total_sum += current_sum;
                }
            }
        }
        
        return total_sum;
    }
};