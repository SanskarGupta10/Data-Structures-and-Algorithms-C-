//k largest elements
#include<bits/stdc++.h>
using namespace std;
void maxHeapify(int arr[],int n,int i){
      int largest = i;
      int left = 2*i + 1;
      int right = 2*i + 2;
      if(left<n && arr[left]>arr[largest]){
         largest = left;
      }
      if(right<n && arr[right]>arr[largest]){
            largest = right;
      }
      if(largest != i){
        swap(arr[largest],arr[i]);
        maxHeapify(arr,n,largest);
      }
}
void pKL(int arr[],int n,int k){
    if(k==0){
        return;
    }
    if(n==0){
        return;
    }
  maxHeapify(arr,n,0);
  cout<<arr[0]<<" ";
  swap(arr[0],arr[n-1]);
  pKL(arr,n-1,k-1);
}
int main(){
int arr[]={5,15,10,20,8};
int n = sizeof(arr)/sizeof(int);
pKL(arr,n,2);

    return 0;
}