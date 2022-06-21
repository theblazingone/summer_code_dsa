class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector <string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set <string> s;
        
        for (string w: words){
            
            string code = "";
            for (char ch: w){
                
                code += morse_code[(int(ch) - 97)];
            }
            
            s.insert(code);
        }
        
        return s.size();
    }
};