#include<bits/stdc++.h>

using namespace std;

int minCoins(int coin[],int n,int amount){
   sort(coin,coin+n,greater<int>());
   int res = 0;
   for(int i=0;i<n;i++){
    if(amount >= coin[i]){
        int c = amount/coin[i];
      
        amount = amount - coin[i]*c;
          res = res + c;
          if(amount == 0){
            break;
          }
    }
   }
   return res;
}

int main(){
 int n;
 cout<<"Number of coins ?"<<endl;
 cin>>n;
 int coin[n];
 for(int i=0;i<n;i++){
    cout<<"Enter the coin value ?"<<endl;
    cin>>coin[i];
 }
  cout<<minCoins(coin,n,52);
}