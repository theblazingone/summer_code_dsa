class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector <string> ans;
        vector <int> res;
        map <int, int> mp;
        
        for (int i = 0; i < target.size(); i++){
            mp[target[i]] = i+1;
        }
        
        for (int i = 1; i <= n; i++){
            ans.push_back("Push");
            res.push_back(i);
            
            if (mp.find(i) == mp.end()){
                ans.push_back("Pop");
                res.pop_back();
            }
            
            if (res == target){
                break;
            }
        }
        
        return ans;
    }
};