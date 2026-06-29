class Solution {
public:

    void swaparr(vector<int>& nums,int i,int j){
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=n-1;

        k=k%n;

        swaparr(nums,i,j);
        swaparr(nums,i,k-1);
        swaparr(nums,k,j);
    }
};