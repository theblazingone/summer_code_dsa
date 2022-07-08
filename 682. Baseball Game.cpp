class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector <int> score;
        vector<int>::iterator it;
        for (int i = 0; i < ops.size(); i++){
            
            if (ops[i] != "C" && ops[i] != "D" && ops[i] != "+"){
                score.push_back(stoi(ops[i]));
            }
            else if (ops[i] == "C"){
                score.pop_back();
            }
            else if (ops[i] == "+"){
                score.push_back(score[score.size()-1] + score[score.size()-2]);
            }
            else if (ops[i] == "D"){
                score.push_back(2 * score[score.size()-1]);
            }
        }
        
        return accumulate(score.begin(), score.end(), 0);
    }
};