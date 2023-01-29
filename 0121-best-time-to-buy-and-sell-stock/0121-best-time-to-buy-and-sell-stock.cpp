class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        if(p.size()==1){
            return 0;
        }
        
        int res = p[1]-p[0];
        int minVal = p[0];
        
        
        
        for(int j = 1; j <p.size(); j++){
            
            res = max(res,p[j]-minVal);
            minVal = min(p[j],minVal);
        }
        
        if(res>0){
            return res;
        }else{
            return 0;
        }
    }
};