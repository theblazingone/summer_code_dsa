class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {

        vector <int> res;

        for (int i = 0; i < B.size(); i++){

            for (int j = 0; j < A.size(); j++){

                if (A[i] == B[j]){

                    res.push_back(j);
                }
            }
        }

        return res;
    }
};