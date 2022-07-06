class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        for (int i = 0; i < prices.size() - 1; i++){
            
            for (int j = i; j < prices.size() - 1; j++){
                
                if (prices[i] >= prices[j+1]){
                    prices[i] -= prices[j+1];
                    break;
                }
                else {
                    continue;
                }
            }
        }
        
        return prices;
    }
};