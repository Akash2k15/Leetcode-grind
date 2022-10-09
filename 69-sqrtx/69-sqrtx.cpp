class Solution {
public:
    int mySqrt(int x) {
        long low = 1;
        long high = x;
        long ans = -1;
        
        if(x==0){
            return 0;
        }
        while(low<=high){
            long mid = (low+high)/2;
            long msq = mid*mid;
            if(msq==x){
                return mid;
            }
            else if(msq>x){
                high = mid-1;
            }
            else{
                low = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
    
};