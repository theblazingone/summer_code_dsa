class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int> vec;
        
        for(int i = 0; i < nums1.size(); i++){
            
            for (int j = 0; j < nums2.size(); j++){
                
                if (nums1[i] == nums2[j]){
                    vec.push_back(nums1[i]);
                }
            }
        }
        
        set <int> s;
        
        for (auto num: vec){
            s.insert(num);
        }
        
        vec.clear();
        
        for (auto num: s){
            vec.push_back(num);
        }
        
        return vec;
    }
};