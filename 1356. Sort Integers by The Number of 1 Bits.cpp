class Solution {
public:
    
    int cntSetBits(int n){
        
        int cnt = 0;
        while (n){
            n = n & (n-1);
            cnt++;
        }
        
        return cnt;
    }
    
    static bool compare(const pair<int, int> &a, const pair<int, int> &b){
        
        if (a.second == b.second){
            return (a.first < b.first);
        }
        
        return (a.second < b.second);
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        vector <pair <int, int>> vec;
        for (int i = 0; i < arr.size(); i++){
            
            int temp = cntSetBits(arr[i]);
            
            vec.push_back(make_pair(arr[i], temp));
        }
        
        sort(vec.begin(), vec.end(), compare);
        
        vector <int> res;
        for (int i = 0; i < vec.size(); i++){
            res.push_back(vec[i].first);
        }
        
        return res;
    }
};