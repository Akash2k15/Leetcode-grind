class Solution {
public:
    int numberOfSteps(int n) {
        int count = 0;
        while(n){
            if(n%2==0){
                n = n/2;
                count++;
                continue;
            }
            
            if(n%2 == 1){
                n = n-1;
                count++;
                continue;
            }
            
            
        }
        
        return count;
    }
};