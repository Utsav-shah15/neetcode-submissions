class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int ele:nums){
            mp[ele]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        for(auto ele:mp){
            pq.push({ele.second,ele.first});
            if(pq.size()>k) pq.pop();
        }

        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
