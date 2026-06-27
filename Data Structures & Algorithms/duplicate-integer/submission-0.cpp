class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        for(auto ele:nums){
            st.insert(ele);
        }
        return !(st.size()==nums.size());
    }
};