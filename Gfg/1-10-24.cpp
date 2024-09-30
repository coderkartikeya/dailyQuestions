class solution {
  public:
    const int mod=1e9+7;
    long long multiplyTwoLists(Node *first, Node *second) {
        long long a=0;
        auto temp=first;
        while(temp!=nullptr){
            int val=temp->data;
            a=(a*10+val)%mod;
            temp=temp->next;
        }
        temp=second;
        long long b=0;
        while(temp!=nullptr){
            int val=temp->data;
            b=(b*10+val)%mod;
            temp=temp->next;
        }
        
        return (a*b)%mod;
    }
};