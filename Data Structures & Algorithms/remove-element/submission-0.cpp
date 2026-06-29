class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(auto ele:nums){
            if(ele!=val){
                nums[k]=ele;
                k++;
            } 
        }
        return k;
    }
};