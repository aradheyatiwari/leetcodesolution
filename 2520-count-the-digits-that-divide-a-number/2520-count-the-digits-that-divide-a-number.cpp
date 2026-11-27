class Solution {
public:
    int countDigits(int num) {
        int n=num,c=0;
        while(n){if(num%(n%10)==0)c++;
        n/=10;
        }
        return c;
    }
};