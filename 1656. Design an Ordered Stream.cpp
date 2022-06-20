class OrderedStream {
public:
    
    vector <string> temp;
    int curr=0 ;
    
    OrderedStream(int n) {
        
      temp = vector<string>(n);  
    }
    
    vector <string> insert(int idKey, string value) {
        
        temp[idKey-1] = value;
        vector <string> ans;
        
        for(int i = curr; i < temp.size(); i++){
            if(temp[i]==""){
                curr=i;
                break;
            } 
            else {
                ans.push_back(temp[i]);
            }
        }
        
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */