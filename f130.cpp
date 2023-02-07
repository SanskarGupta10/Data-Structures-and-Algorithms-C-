#include<bits/stdc++.h>
using namespace std;
//heap sort operations
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
void heapify(int arr[],int n,int i){
 int smallest = i;
      int left = 2*i + 1;
      int right = 2*i + 2;
      if(left<n && arr[left]<arr[smallest]){
         smallest = left;
      }
      if(right<n && arr[right]<arr[smallest]){
            smallest = right;
      }
      if(smallest != i){
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
      }

}
void buildHeap(int arr[],int n){
    for(int i = (n-2)/2;i>=0;i--){
        maxHeapify(arr,n,i);
    }
}

void heapSort(int arr[],int n){
     buildHeap(arr,n);
     for(int i=n-1;i>=0;i--){
       swap(arr[0],arr[i]);
       maxHeapify(arr,i,0);
     }
}
int main(){
    int arr[]={100,1,89,3,10,61};
    int n = sizeof(arr)/sizeof(int);
    heapSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}