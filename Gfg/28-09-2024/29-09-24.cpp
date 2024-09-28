int totalCount(int k, vector<int>& arr) {
        int sum=0;
        for(auto x:arr){
            sum+=(x%k==0)?x/k:(x/k)+1;
        }
        return sum;
    }