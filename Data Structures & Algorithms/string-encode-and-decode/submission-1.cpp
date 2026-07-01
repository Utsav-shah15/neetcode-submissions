class Solution {
public:

    string encode(vector<string>& strs) {
        char ch='-';
        string ans="";
        for(auto ele:strs){
            ans+=ele;
            ans+=ch;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string str="";
        for(char ch:s){
           if(ch=='-'){
              ans.push_back(str);
              str="";
           }else{   
              str+=ch;
           }
        }

        return ans;
    }
};
