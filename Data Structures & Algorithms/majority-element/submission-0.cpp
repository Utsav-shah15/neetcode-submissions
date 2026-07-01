class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int count=n/2;

        unordered_map<int,int> mp;

        for(auto ele:nums){
            mp[ele]++;
        }

        for(auto ele:mp){
            if(ele.second>count){
                return ele.first;
            }
        }
    }
};