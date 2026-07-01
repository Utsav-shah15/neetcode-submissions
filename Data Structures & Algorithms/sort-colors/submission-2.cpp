class Solution {
public:
    void sortColors(vector<int>& arr) {
        int size=arr.size();
        for(int i=0;i<size;i++){
            bool flag=true;
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                    flag=false;
                }
            }
            // if(flag) break;
        }
    }
};