class Solution {
public:
  vector<string> cellsInRange(string s) {
        char start = s[0];
        char end =s[3];
        char l = s[1];
        char r = s[4];
        vector<string>ans;
         for (char a =  start ;a <=end ;a++)
         {
             for (char left = l ; left<=r ; left++)
             {
                 string temp = "aa";
                 temp[0] = a;
                 temp[1] = left;
                 ans.push_back(temp);
             }
         }
    return  ans;

}
};
