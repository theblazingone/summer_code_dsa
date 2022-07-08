class Solution {
public:
    
    static bool compare(const vector <int> &a, const vector <int> &b){
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int ans = 0;
        
        sort(boxTypes.begin(), boxTypes.end(), compare);
        for (int i = 0; i < boxTypes.size(); i++){
            
            if (boxTypes[i][0] <= truckSize){
                truckSize -= boxTypes[i][0];
                ans += boxTypes[i][0] * boxTypes[i][1];
                
                if (truckSize == 0){
                    return ans;
                }
            }
            else{
                
                ans += boxTypes[i][1] * truckSize;
                return ans;
            }
        }
        
        return ans;
    }
};