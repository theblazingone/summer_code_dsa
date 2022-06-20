class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        encoded.insert(encoded.begin(), first);
        
        for (int i = 1; i < encoded.size(); i++){
            first = first xor encoded[i];
            encoded[i] = first;
        }
        
        return encoded;
    }
};