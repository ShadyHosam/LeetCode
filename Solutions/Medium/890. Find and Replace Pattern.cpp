class Solution {
    bool isSamePattern(string str1, string str2){
        int n = str1.length();
		
        unordered_map< char,char > um;
        vector<bool> visited (26,false);
        
        for(int i = 0; i < n; i++){
            char c1 = str1[i],c2 = str2[i];
            
            if( um[c1] && um[c1]!=c2)
                return false;
            if( !um[c1] && visited[c2-'a'])
                return false;
            
            um[c1] = c2, visited[ c2-'a' ] = true;
        }
        return true;
    }
    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string word : words)
            if(isSamePattern(word,pattern)) ans.emplace_back(word);
        return ans;
    }
};
