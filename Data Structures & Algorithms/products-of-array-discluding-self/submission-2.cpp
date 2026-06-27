class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int ZeroCount=0;
        bool isNum=false;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
              ZeroCount++;
           }else{
              product*=nums[i];
           }
        }

        if(ZeroCount>1){
             vector<int> ans(nums.size(),0);
             return ans;
        } 
        vector<int> ans(nums.size());

        for(int i=0;i<nums.size();i++){
            if(ZeroCount==1){
                if(nums[i]==0) ans[i]=product;
                else ans[i]=0;
            }else{
                ans[i]=product/nums[i];
            }
        }

        return ans;
    }
};
