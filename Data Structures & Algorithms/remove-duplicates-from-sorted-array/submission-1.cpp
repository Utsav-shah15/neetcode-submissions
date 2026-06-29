class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=i+1;

        int k=0;
        while(j<nums.size()){
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            if(j==nums.size()) break;
            nums[k]=nums[i];
            i=j;
            j++;
            k++;
        }
        nums[k]=nums[i];
        k++;
        return k;
    }
};