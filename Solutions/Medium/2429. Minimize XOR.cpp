class Solution {
    #define ll long long 
    public:
    
    int minimizeXor(int a, int b) {
    bitset<32> num1(a);
    bitset<32> ans(0);
    int bts = __builtin_popcount(b);
    for (int i = 31; i >= 0; i--) {
        if (num1[i] == 1) 
            if (bts)
               ans[i] = 1, bts--;  
    }
    for (int i = 0; i <= 32; i++) {
        if (bts and num1[i] == 0) 
            ans[i] = 1,bts--; 
    }
    int mybit_int=(int)(ans.to_ulong());
   return mybit_int;
    }
};
