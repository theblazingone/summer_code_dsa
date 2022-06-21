class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        
        int cnt = 0;
        
        for (int i = 0; i < nums.size(); i++){
            
            for (int j = i; j < nums.size(); j++){
                
                if ((i*j) % k == 0){
                    
                    if (nums[i] == nums[j] && i != j){
                        cnt ++;
                    }
                }
            }
        }
        
        return cnt;
    }
};