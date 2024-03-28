class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4) {
        map<int, int> m1;
        int count = 0;
        int n = nums1.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                m1[nums1[i] + nums2[j]]++;
            }
        }
       for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int search = (nums3[i] + nums4[j]) * -1; 
            if(m1.find((search)) != m1.end() && m1[search] > 0 ){
                
                count += m1[search];
            }
        }
       }
        return count;
    }
};