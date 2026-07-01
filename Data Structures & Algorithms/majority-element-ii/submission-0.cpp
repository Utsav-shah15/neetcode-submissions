class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto ele:nums){
            mp[ele]++;
        }

        int count=nums.size()/3;
        vector<int> ans;

        for(auto ele:mp){
            if(ele.second>count){
                ans.push_back(ele.first);
            }
        }

        return ans;
    }
};