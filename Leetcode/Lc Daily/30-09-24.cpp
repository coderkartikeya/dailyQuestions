class CustomStack {
public:
    vector<int>v;
    int pointer;
    int first;
    int size;
    int maxi;
    CustomStack(int maxSize) {
        v=vector<int>(maxSize,0);
        size=0;
        maxi=maxSize;
        pointer=0;
        first=0;
        
    }
    
    void push(int x) {
        if(size==maxi){
            return ;
        }
        v[pointer]=x;
        pointer++;
        size++;

        
    }
    
    int pop() {
        if(size==0) return -1;
        pointer--;
        size--;
        return v[pointer];
        
    }
    
    void increment(int k, int val) {
        if(size<k){
            for(int i=0;i<size;i++){
                v[i]+=val;
            }
        }else{
            for(int i=0;i<k;i++){
                v[i]+=val;
            }
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */