class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0 ; int high = arr.size() -1; 
        while(low <= high){
            int mid = (low + high)/2; 
            int mid1 = mid + 1;
            if(arr[mid] > arr[mid1] ){
                high = mid -1; 
            }
            else{
                low = mid + 1;
            }
        }
        return low ; 
    }
};