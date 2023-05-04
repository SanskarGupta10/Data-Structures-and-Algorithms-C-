//maximum cuts in the rope using dynamic programming and recursion
#include<bits/stdc++.h>
using namespace std;
//recursive solution
int maxCut(int n,int a,int b,int c){
     if(n==0){
        return 0;
     }
     if(n<0){
        return -1;
     }
     int res = max(maxCut(n-a,a,b,c),max(maxCut(n-b,a,b,c),maxCut(n-c,a,b,c)));\
     if(res == -1){
        return res;
     }
     else{
        return res+1;
     }
}
//dp solution
int cutMDp(int n,int a,int b,int c){
  int dp[n+1];
  dp[0]=0;
  for(int i=1;i<=n;i++){
    dp[i]=-1;
  }
  for(int i=1;i<=n;i++){
    if(i-a>=0){
        dp[i] = max(dp[i],dp[i-a]);
    }
    if(i-b>=0){
        dp[i] = max(dp[i],dp[i-b]);
    }
    if(i-c>=0){
        dp[i] = max(dp[i],dp[i-c]);
    }
    if(dp[i]!=-1){
        dp[i] = dp[i]+1;
    }
  }
   return dp[n];
}
int main(){
   cout<<maxCut(23,12,11,13)<<endl;
   cout<<cutMDp(23,12,11,13)<<endl;
    return 0;
}