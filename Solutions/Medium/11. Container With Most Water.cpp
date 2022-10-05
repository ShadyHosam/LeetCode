class Solution {
    #define ll long long
public:
   
long long maxArea(vector<int> &height) {
    int n = height.size();
    int i = 0, j = n - 1;
    ll ans = 0;

    while (i < j) {
        ll tmp = (j - i) * min(height[j], height[i]);
        ans = max(tmp, ans);
        if (height[j] > height[i])i++;
        else
            j--;
    }
    return ans;
}


};
