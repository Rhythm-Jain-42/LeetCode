class RandomizedSet {
public:
    unordered_map<int,int> m;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m[val] == 0)
        {
            m[val]++;
            v.push_back(val);
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool remove(int val) {
        if(m[val] == 0)
        {
            return false;
        }

        else{
            m.erase(val);
            v.erase(find(v.begin(),v.end(),val));
            return true;
        }
    }
    
    int getRandom() {
        int random = rand() % (v.size());
        int sel_elem = v[random];
        return sel_elem;
    }
};
