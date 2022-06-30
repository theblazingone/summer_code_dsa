class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int cnt = 0;
        int sz = startTime.size();
        for (int i = 0; i < sz; i++){
            if (queryTime >= startTime[i] && queryTime <= endTime[i]){
                cnt++;
            }
        }
        
        return cnt;
    }
};