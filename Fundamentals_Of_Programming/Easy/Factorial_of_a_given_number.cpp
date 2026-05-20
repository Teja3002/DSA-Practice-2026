class Solution {
public:
    int factorial(int n) {
int fac=1;
if(n==0)return 1;
for(int i=1;i<=n;i++){
    fac=fac*i;
}
return fac;
}
};