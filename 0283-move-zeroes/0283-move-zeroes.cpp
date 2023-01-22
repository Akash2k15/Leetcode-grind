class Solution {
public:
    void moveZeroes(vector<int>& ds) {
        int count = 0;
        
        for(int i =0; i<ds.size();i++){
            if(ds[i]!=0){
                swap(ds[i],ds[count]);
                count++;
            }
        }
    }
};