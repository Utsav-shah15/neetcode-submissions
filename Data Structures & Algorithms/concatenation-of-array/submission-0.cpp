class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;

        for(int ele:nums){
            ans.push_back(ele);
        }

        for(int ele:nums){
            ans.push_back(ele);
        }

        return ans;
    }
};