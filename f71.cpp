#include<iostream>
using namespace std;
//counting inversions in an array
int count(int arr[],int n){
    int count =0;
  for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
            count++;
           }
    }
  }
  return count;
}
int main(){
 int arr[]={40,30,20,10};
 int n = sizeof(arr)/sizeof(int);
 cout<<"The inversion count in an array is :- "<<count(arr,n)<<endl;
    return 0;
}