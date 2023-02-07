//purchasing max items
#include<bits/stdc++.h>
using namespace std;

int maxItem(int arr[],int n,int sum){
    sort(arr,arr+n);
    //else we can use heap sort
    int res = 0;
    int i=0;
  while(i<n && (sum-arr[i]>=0)){
         sum = sum - arr[i];
         res++;
         i++;

  }
  return res;
}

int main(){
  int arr[]={20,10,5,30,100};
int n = sizeof(arr)/sizeof(int);
    cout<<"The max items can be purchased are := "<<maxItem(arr,n,35)<<endl;
    return 0;
}