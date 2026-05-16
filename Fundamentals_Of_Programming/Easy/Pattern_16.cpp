class Solution {
public:
    void pattern16(int n) {
for(int i=1;i<=n;i++){ 
    char letter='A'+i-1;
    for(char txt='A';txt<=letter;txt++){
        cout<<letter;
    }
    cout<<endl;
}
    }
};