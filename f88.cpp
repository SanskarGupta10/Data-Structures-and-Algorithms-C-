#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
//maximum of all subarrays of size k

void maxSub(int arr[],int n,int k){
    int res = INT_MIN;
    int ans = res;
for(int i=0;i<=n-k;i++){
   for(int j=i;j<k+i;j++){
      ans = max(ans,arr[j]);
      }
       cout<<ans<<"  ";
       ans = res;
   }

}

int main(){
int arr[]={20,5,3,8,6,15};
int n = sizeof(arr)/sizeof(int);
maxSub(arr,n,4);
    return 0;
}
