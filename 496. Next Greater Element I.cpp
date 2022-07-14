#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

class Solution {
public:
    
    int greater_element(vector <int> nums, int n, int sz){
        
        int maxi = nums[n-1];
        for (int i = n; i < sz; i++){
            maxi = max(maxi, nums[i]);
            if (maxi > nums[n-1]){
                break;
            }
        }
        
        return (maxi <= nums[n-1]) ? -1 : maxi;
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int> res, ans;
        
        int n = nums1.size(), m = nums2.size();
        
        for (int i = 0; i < m - 1; i++){
            res.push_back(greater_element(nums2, i+1, m));
        }
        res.push_back(-1);
    
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                
                if (nums1[i] == nums2[j]){
                    ans.push_back(res[j]);
                }
            }
        }
        
        return ans;
    }
};

int main(){

    Solution c;
    vector <int> nums1 = {4,1,2}, nums2 = {1,3,4,2}, sol;
    sol = c.nextGreaterElement(nums1, nums2);
    
    for (int i = 0; i < sol.size(); i++){
        cout << sol[i] << " ";
    }
    cout << "\n";

    return 0;
}