class Solution {
public:
    
    bool check_palindrome(string s){
        string z = s;
        reverse(s.begin(), s.end());
        if (s == z){
            return true;
        }
        
        return false;
    }
    
    string firstPalindrome(vector<string>& words) {
        
        string s = "";
        for (int i = 0; i < words.size(); i++){
            
            if (check_palindrome(words[i])){
                s = words[i];
                break;
            }
        }
        
        return s;
    }
};