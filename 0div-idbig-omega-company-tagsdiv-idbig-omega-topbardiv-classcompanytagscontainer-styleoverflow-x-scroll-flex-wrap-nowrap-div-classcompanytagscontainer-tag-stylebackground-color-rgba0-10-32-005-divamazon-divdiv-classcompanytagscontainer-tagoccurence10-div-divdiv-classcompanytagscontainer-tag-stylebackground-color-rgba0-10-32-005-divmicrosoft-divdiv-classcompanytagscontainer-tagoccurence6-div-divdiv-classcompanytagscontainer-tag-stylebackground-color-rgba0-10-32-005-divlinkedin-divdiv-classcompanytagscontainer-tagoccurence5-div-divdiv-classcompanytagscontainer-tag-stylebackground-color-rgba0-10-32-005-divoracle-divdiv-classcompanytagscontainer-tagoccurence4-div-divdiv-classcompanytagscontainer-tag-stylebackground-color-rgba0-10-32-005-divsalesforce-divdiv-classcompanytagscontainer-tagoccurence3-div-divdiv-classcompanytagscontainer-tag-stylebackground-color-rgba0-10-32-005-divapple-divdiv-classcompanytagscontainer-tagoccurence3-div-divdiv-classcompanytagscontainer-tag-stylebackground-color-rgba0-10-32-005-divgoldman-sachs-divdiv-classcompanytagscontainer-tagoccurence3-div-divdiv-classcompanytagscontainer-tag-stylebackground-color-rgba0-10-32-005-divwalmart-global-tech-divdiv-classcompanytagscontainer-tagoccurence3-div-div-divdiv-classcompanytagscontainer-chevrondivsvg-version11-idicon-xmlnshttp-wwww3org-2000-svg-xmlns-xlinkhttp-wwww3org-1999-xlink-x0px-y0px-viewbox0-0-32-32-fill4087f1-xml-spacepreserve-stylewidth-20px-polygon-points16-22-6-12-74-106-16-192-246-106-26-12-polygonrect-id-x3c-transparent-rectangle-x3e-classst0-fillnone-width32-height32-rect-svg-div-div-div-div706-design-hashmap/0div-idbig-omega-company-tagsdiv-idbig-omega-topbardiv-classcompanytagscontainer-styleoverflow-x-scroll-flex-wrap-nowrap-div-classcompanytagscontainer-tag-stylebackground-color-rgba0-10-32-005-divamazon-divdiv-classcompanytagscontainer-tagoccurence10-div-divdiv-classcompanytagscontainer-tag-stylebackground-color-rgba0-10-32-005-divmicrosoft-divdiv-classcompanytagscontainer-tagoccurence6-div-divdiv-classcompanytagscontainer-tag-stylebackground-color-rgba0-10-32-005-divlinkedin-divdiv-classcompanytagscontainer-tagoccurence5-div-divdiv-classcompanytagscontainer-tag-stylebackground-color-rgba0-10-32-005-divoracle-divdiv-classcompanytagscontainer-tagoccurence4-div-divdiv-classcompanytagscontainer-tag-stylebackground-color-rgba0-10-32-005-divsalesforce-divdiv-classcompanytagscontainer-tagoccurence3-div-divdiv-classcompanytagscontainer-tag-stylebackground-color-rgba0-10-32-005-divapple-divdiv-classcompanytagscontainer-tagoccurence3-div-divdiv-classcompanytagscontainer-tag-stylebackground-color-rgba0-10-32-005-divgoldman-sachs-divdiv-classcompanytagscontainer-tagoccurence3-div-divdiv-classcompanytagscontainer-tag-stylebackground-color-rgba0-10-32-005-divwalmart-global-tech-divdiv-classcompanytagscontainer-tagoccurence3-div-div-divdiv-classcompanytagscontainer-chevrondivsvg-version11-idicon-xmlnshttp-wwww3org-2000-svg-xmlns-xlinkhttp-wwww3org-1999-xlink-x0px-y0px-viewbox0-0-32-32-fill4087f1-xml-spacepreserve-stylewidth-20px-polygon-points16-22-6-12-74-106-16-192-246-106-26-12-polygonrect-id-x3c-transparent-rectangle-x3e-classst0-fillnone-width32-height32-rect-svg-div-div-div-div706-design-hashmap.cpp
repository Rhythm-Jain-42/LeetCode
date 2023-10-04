class MyHashMap {
public:
    vector<pair<int,int>>hashMap;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
       bool isPresent=false;
         for(int i=0;i<hashMap.size();i++){
           if(hashMap[i].first==key){
                hashMap[i].second = value;
                isPresent = true;
           }
       }
       if(!isPresent){
           hashMap.push_back({key,value});
       }
    }
    
    int get(int key) {
       for(int i=0;i<hashMap.size();i++){
           if(hashMap[i].first==key){
               return hashMap[i].second;
           }
       }
       return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<hashMap.size();i++){
           if(hashMap[i].first==key){
               hashMap[i].second = -1;
           }
       }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */