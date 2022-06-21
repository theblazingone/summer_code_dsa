#include <bits/stdc++.h>

using namespace std;

class solution{

public:

    vector <int> solve(vector<int> &arr1, vector <int> &arr2, vector <int> &arr3){

        int i = arr1.size() - 1, j = arr2.size() - 1, k = arr3.size() - 1;
        vector <int> intersection;

        while (i >= 0 && j >= 0 && k >= 0){

            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]){
                intersection.push_back(arr1[i]);

                i--;
                j--;
                k--;
            }
            else if (arr1[i] < arr2[j]){
                j--;
            }
            else if (arr2[j] < arr3[k]){
                k--;
            }
            else {
                i--;
            }
        }

        return intersection;
    }
};

int main(){

    solution a;
    vector <int> A = {1, 2, 3, 4, 5, 6};
    vector <int> B = {2, 4, 5, 6, 7, 8};
    vector <int> C = {2, 5, 6, 7, 8, 9};
    
    vector <int> res = a.solve(A, B, C);

    return 0;
}