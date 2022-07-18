class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        int min_dif = abs(arr[0] - arr[1]);
        for (int i = 0; i < arr.size() - 1; i++){
            min_dif = min (min_dif, abs(arr[i+1] - arr[i])); 
        }
        
        vector <vector <int>> res;
        for (int i = 0; i < arr.size() - 1; i++){
            if (abs(arr[i+1] - arr[i]) == min_dif){
                vector <int> ans;
                ans.push_back(arr[i]);
                ans.push_back(arr[i+1]);
                res.push_back(ans);
            }
        }
        
        return res;
    }
};