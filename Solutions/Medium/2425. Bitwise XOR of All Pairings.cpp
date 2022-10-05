class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size() , x1 = 0 , x2 = 0 , ret= 0;
        for (int i = 0 ; i < n;i++)
            x1^=nums1[i];
        
        for (int i = 0 ; i<m;i++)
            x2^=nums2[i];
        
        if (n % 2 == 1 and m % 2 == 0)
            ret = x2;
        else if (n % 2 == 0 and m % 2 == 0 )return ret;
        else if (n % 2 == 1 and m % 2 == 1 )ret = x1 ^ x2 ;
        else if (n % 2 == 0 and m % 2 == 1 )  ret = x1 ;
        return ret;
        
    }
};
