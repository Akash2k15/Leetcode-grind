class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
//             if an array has only one element then the element is the peak of the array
//             if an array is sorted in ascending order then the last element is the peak and vice versa (there is atleast one peak element in an array)
//             check mid if its peak, if not go to the half which is the highest valued neighbour of peak.
            
            if((mid == 0 || nums[mid]>=nums[mid-1]) && (mid == nums.size()-1 || nums[mid]>=nums[mid+1])){
                return mid;
            }
            
            if(mid>0 && nums[mid]<nums[mid-1]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
    return -1;}
};
