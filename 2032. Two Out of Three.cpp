class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector <int> res;
        set <int> s;

        int i = 0, j = 0, k = 0;
        
        for (int i = 0; i < nums1.size(); i++){
            for (int j = 0; j < nums2.size(); j++){
                if (nums1[i] == nums2[j]){
                    res.push_back(nums1[i]);
                }
            }
        }
        
        for (int i = 0; i < nums2.size(); i++){
            for (int j = 0; j < nums3.size(); j++){
                if (nums2[i] == nums3[j]){
                    res.push_back(nums2[i]);
                }
            }
        }
        
        for (int i = 0; i < nums1.size(); i++){
            for (int j = 0; j < nums3.size(); j++){
                if (nums1[i] == nums3[j]){
                    res.push_back(nums1[i]);
                }
            }
        }
        
        for (int i = 0; i < res.size(); i++){
            s.insert(res[i]);
        }
        
        vector <int> ans(s.begin(), s.end());
        
        return ans;
    }
};