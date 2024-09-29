void ans(Node* head,vector<int>&v){
        if(head==nullptr) return ;
        
        ans(head->left,v);
        v.push_back(head->data);
        ans(head->right,v);
    }
    vector<int> merge(Node *root1, Node *root2) {
        vector<int>v;
        ans(root1,v);
        ans(root2,v);
        sort(v.begin(),v.end());
        
        return v;
    }