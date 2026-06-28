class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        int n=operations.size();

        for(auto str:operations){
            if(str=="+"){
                if(st.size()==0) continue;
                int num1=stoi(st.top());
                st.pop();
                if(st.size()==0) {
                    st.push(to_string(num1));
                    continue;
                }
                int num2=stoi(st.top());
                st.push(to_string(num1));
                int num3=num1+num2;
                st.push(to_string(num3));
            } 
            else if(str=="C"){
                if(st.size()==0) continue;
                st.pop();
             }
            else if(str=="D"){
                if(st.size()>0){
                    int num1=stoi(st.top());
                    int ans=2*num1;
                    st.push(to_string(ans));
                }
            }
            else{
                st.push(str);
            }
        }

        int sum=0;
        while(st.size()>0){
            sum+=stoi(st.top());
            st.pop();
        }

        return sum;
    }
};