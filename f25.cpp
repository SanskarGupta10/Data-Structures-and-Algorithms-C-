//finding the index of largest element in an array
#include<iostream>
#include<limits.h>
using namespace std;

int indexMax(int arr[],int n){
   int max = INT_MIN;
   int j=-1;
   for( int i=0;i<n;i++){
  if(arr[i]>max){
    max = arr[i];
    j++;
  }
   }  
   return j;
}
//finding the second largest element
int secinMax(int arr[],int n){
    int max = INT_MIN;
    int res = max;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++){
      if(max>arr[i] && res<arr[i]){
        res = arr[i];
      }
    }
    int k;
    for( k=0;k<n;k++){
        if(arr[k]==res){
            break;
        }
    }
    return k;
}
int main(){
  int arr[]={78,7,6,8,32,41};
  int size = sizeof(arr)/sizeof(int);
  cout<<"The index of the largest element is "<<indexMax(arr,6)<<endl;
  cout<<"The index of the second largest element is "<<secinMax(arr,size)<<endl;
    return 0;
}