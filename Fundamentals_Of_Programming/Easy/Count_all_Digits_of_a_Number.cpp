class Solution {
public:
    int countDigit(int n) {
     int cnt=0;
     if (n==0){
        return 1;
     }
     while(n>0){
        int last=n % 10;
        n=n /10;
        cnt=cnt+1;
     }
     return cnt;

    }