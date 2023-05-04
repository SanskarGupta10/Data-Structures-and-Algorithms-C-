//gfg  made approach for min jumps to reach an end using dynamic programming
#include<bits/stdc++.h>
using namespace std;

int minJ(int arr[],int n){
  //here dp[i] represents the min jumps to reach an index i using dynamic programming.
    int dp[n];
    dp[0] = 0;
    for(int i=1;i<n;i++){
      dp[i] = INT_MAX;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
          if(arr[j]+j >= i){
            if(dp[j]!=INT_MAX){
              dp[i] = min(dp[i],dp[j]+1);
            }
          }
        }
    }
    return dp[n-1];
}

int main(){
    int arr[] = {4,1,5,3,1,3,2,1,8};
    int n = sizeof(arr)/sizeof(int);
    cout<<minJ(arr,n)<<endl;
    return 0;
}