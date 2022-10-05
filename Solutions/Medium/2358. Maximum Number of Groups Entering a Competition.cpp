class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int cnt = 1;
     while(true)
      {
         if (n - ((cnt*(cnt +1))/ 2) >= cnt+1)
                       cnt++;
       else break;
      }
        return cnt;
          
    }
};
