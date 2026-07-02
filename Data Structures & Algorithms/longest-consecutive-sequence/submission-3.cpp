class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());

        int longest=0;
        for(auto num:nums){
            if(st.count(num-1)==0){
                int curr=num;
                int longestcount=1;
                while(st.count(curr+1)){
                    curr++;
                    longestcount++;
                }
                longest=max(longestcount,longest);
            }
        }

        return longest;
    }
};
