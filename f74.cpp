#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
// chocolate distribution method
int chocDis(int arr[],int n,int m){
    int res =INT_MAX;
    int sum;
    sort(arr,arr+n);
     for(int i=0;i<n-m+1;i++){
         sum = arr[i+m-1]-arr[i];
         res = min(res,sum);
         sum = 0;
     }
     return res;
}
int main(){
   int arr[]={3,4,1,9,56,7,9,12};
   int n = sizeof(arr)/sizeof(int);
   int m;
   cout<<"Enter the value of m?"<<endl;
   cin>>m;
   cout<<chocDis(arr,n,m)<<endl;
    return 0;
}