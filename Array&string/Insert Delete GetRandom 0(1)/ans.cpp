class RandomizedSet {
    unordered_set<int>vall;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        
        if (vall.find(val)==vall.end()){
            vall.insert(val);
            return 1;
        }
        return 0;
        
    }
    
    bool remove(int val) {
        
        if (vall.find(val)!=vall.end()){
            vall.erase(val);
            return 1;
        }
        return 0;
    }
    
    int getRandom() {
        return *next(vall.begin(),rand()%vall.size());
    

    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */