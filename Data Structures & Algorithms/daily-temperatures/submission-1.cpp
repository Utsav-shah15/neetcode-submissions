class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n=temp.size();

        vector<int> ans(n);
        ans[n-1]=0;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(temp[st.top()]<=temp[i]){
                st.pop();
                if(st.size()==0) break;
            }

            if(st.size()==0) ans[i]=0;
            else ans[i]=st.top()-i;

            st.push(i);
        }

        return ans;
    }
};
