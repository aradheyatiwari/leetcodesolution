class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2 != 0) return false;
        long long target = n/2;
        long long a=0, b=1;
        while(b<target){
            long long temp = a+b;
            a=b;
            b=temp;
        }
        return b == target;
    }
};