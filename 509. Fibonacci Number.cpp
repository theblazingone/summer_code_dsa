class Solution {
private:
    
    int result(int n){
        
        if (n == 0 || n == 1){
            return n;
        }
        
        return result(n-1) + result(n-2);
    }
public:
    int fib(int n) {
        
        return result(n);
    }
};