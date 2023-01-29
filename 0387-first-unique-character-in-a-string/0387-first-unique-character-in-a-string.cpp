class Solution {
public:
    int firstUniqChar(string s) {
        
//         learnt map data structure (STL)
        
        unordered_map<int,int> val;
        
        for(int i = 0; i<s.length();i++){
            val[s[i]]++;
        }
        
       for (int i = 0; i < s.size(); i++) {
            if (val[s[i]] == 1) return i;
        }
        
        return -1;
    }
};