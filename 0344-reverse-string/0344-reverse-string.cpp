class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        
//         if(s.size()==0){
    
//         }
        
        for(int i = 0; i<s.size();i++){
            if(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
    }
};