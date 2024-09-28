#include <iostream>
using namespace std;
#include <vector>

class Solution {
  public:
    int f(int i,vector<int>&arr ,int n,int k,vector<int>&dp){
        if(i==n-1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        int mini=INT_MAX;
        // int j_=-1;
        for(int j=i+1;j<n && j<=i+k;j++){
            int val=abs(arr[i]-arr[j])+f(j,arr,n,k,dp);
            if(mini>val){
                mini=val;
                // j_=j;
            }
            
        }
        // cout<<mini<<" "<<j_<<endl;
        return dp[i]=mini;
    }
    int minimizeCost(int k, vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return f(0,arr,n,k,dp);
    }
};