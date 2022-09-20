#include<iostream>
using namespace std; 
// using recursive binary search

int binSeaRec(int arr[],int low,int high,int element){
  int mid;
  mid = (high+low)/2;
 
  if(arr[mid]==element){
     return mid;
  }
  if(arr[mid]>element){
    binSeaRec(arr,low,mid-1,element);
  }
  if(arr[mid]<element){
    binSeaRec(arr,mid+1,high,element);
  }
 
}
int main(){
  int arr[]={12,16,18,21,23};
  //to find whether the element searched is present or not
  cout<<"The index of the searched element is "<<binSeaRec(arr,0,4,23)<<endl;

    return 0;
}