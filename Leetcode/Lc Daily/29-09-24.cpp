class AllOne {
public:
    unordered_map<string,int>m;
    set<pair<int,string>>st;
    AllOne() {
        
    }
    
    void inc(string key) {
        int n=m[key];
        st.erase({n,key});
        m[key]++;
        st.insert({n+1,key});
        
    }
    
    void dec(string key) {
        if(m[key]>0){
            int n=m[key];
        st.erase({n,key});
        m[key]--;
        if(m[key]!=0){
            st.insert({n-1,key});
        }
        }
    }
    
    string getMaxKey() {
        if(st.empty()) return "";
        return st.rbegin()->second;
    }
    
    string getMinKey() {

        if(st.empty()) return "";

        return st.begin()->second;
        
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */