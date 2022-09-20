#include<iostream>
#include<algorithm>
using namespace std;

//k th smallest element in an array
int kEle(int arr[],int n,int k){
//to sort an array using intro sort
  sort(arr,arr+n);
  return arr[k-1];

}
int main(){
int arr[]={30,20,5,10,8};
int n = sizeof(arr)/sizeof(int);
int k;
cout<<"Enter the value of k?"<<endl;
cin>>k;
cout<<kEle(arr,n,k)<<endl;

}