class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector <bool> res;
        
        for (int i = 0; i < candies.size(); i++){
            
            candies[i] += extraCandies;
            
            int n = *max_element(candies.begin(), candies.end());
            
            if (candies[i] >= n){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
            
            candies[i] -= extraCandies;
        }
        
        return res;
    }
};