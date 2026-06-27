class MyHashMap {
public:
    vector<pair<int,int>> v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(get(key)==-1){
            v.push_back({key,value});
        }else{
            for(int i=0;i<v.size();i++){
                if(v[i].first==key){
                    v[i].second=value;
                }
            }
        }
    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                return v[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i].first==key){
                v[i].first=-1;
            }
        }
    }
};