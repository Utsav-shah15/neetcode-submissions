class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int count=0;
        int i=0;
        int j=s.size()-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }
        }

        if(count>1) return false;
        else return true;
    }
};