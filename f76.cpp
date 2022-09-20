#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
//minimum difference in an array
int minDiff(int arr[],int n){
int res = INT_MAX;
int dif;
if(n==1){
    cout<<endl<<"Indefinite"<<endl;
    return res;
}
sort(arr,arr+n);
for(int i=0;i<n-1;i++){
 dif = arr[i+1]-arr[i];
 res = min(dif,res);
 dif = 0;
}
return res;
}
int main(){
int arr[]={11,3,5,98,23,111,123};
int n = sizeof(arr)/sizeof(int);
  cout<<"The minimum difference is :- "<<minDiff(arr,n);
}