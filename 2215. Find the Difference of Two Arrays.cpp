class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int> res;
        vector <vector <int>> ans;
        
        unordered_set <int> s1(nums1.begin(), nums1.end());
        unordered_set <int> s2(nums2.begin(), nums2.end());
        
        for (auto num: s1){
            if (s2.find(num) == s1.end()){
                res.push_back(num);
            }
        }
        ans.push_back(res);
        
        res.clear();
        
        for (auto num: s2){
            if (s1.find(num) == s2.end()){
                res.push_back(num);
            }
        }
        ans.push_back(res);
        
        return ans;
    }
};