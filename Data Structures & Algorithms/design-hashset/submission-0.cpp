class MyHashSet {
public:
    vector<int> ans;
    MyHashSet() {
        
    }
    
    void add(int key) {
        bool flag=true;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==key){
                flag=false;
            }
        }
        if(flag){
            ans.push_back(key);
        }
    }
    
    void remove(int key) {
        for(int i=0;i<ans.size();i++){
            if(ans[i]==key){
                ans[i]=-1;
            }
        }
    }
    
    bool contains(int key) {
        for(int i=0;i<ans.size();i++){
            if(ans[i]==key){
                return true;
            }
        }
        return false;
    }
};