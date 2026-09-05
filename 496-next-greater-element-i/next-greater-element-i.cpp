class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0 ; i<nums1.size();i++){
            int j = 0;
            while(j<nums2.size()&&nums2[j]!=nums1[i]){
                j++;
            }
            int result  = -1;
            for(int k = j+1; k<nums2.size();k++){
                if(nums2[k]>nums1[i]){
                    result = nums2[k];
                    break;
                }

            } 
            ans.push_back(result);      
        }
        return ans;    
    }
};