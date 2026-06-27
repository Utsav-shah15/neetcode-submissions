class Solution {
public:
    string sortStr(string str){
        sort(str.begin(),str.end());
        return str;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            string s=sortStr(strs[i]);
            mp[s].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto ele:mp){
            vector<string> str;
            for(auto el:ele.second){
                str.push_back(el);
            }
            ans.push_back(str);
        }

        return ans;
    }
};
