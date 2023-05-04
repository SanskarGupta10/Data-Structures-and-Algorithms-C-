//Minimum coins to make a value using dynamic programming and recursion.
#include<bits/stdc++.h>
using namespace std;
//recursive solution
int getMin(int coins[],int n,int val){
  if(val==0){
    return 0;
  }
  int res = INT_MAX;
  for(int i=0;i<n;i++){
    if(coins[i]<=val){
        int sub_res = getMin(coins,n,val-coins[i]);
        if(sub_res!=INT_MAX){
            res = min(res,sub_res+1);
        }
    }
  }
  return res;
}

//dynamic programming solution is same as recursive solution
int minCoins(int coins[],int n,int val){
    //here dp[i] represents the min coins required to make the value i .
    int dp[val+1];
    dp[0]=0;
    for(int i=1;i<=val;i++){
        dp[i] = INT_MAX;
    }
    for(int i=1;i<=val;i++){
        for(int j=0;j<n;j++){
            if(coins[i]<=i){
                int sub_res = dp[i-coins[j]];
                if(sub_res != INT_MAX){
                    dp[i] = min(dp[i],sub_res+1);
                }
            }
        }
    }
  return dp[val];
}
int main(){
   int coins[] = {25,10,5};
   int n = sizeof(coins)/sizeof(int);
   cout<<minCoins(coins,n,30)<<endl;
   int coin[]={9,6,5,1};
   int m = sizeof(coin)/sizeof(int);
   cout<<getMin(coin,m,11)<<endl;

    return 0;
}