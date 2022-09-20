#include<iostream>
using namespace std;

int maxProf(int arr[],int n){
    int res = 0;
   for(int i=0;i<n-1;i++){
      for(int j = i+1;j<n;j++){
        if(arr[j]>arr[i]){
           res = res + arr[j]-arr[i];
           break;
        }
        else{
             i++;
        }
      }
   }
return res;

}

int main(){
      int arr[]= {10,20,30};
      int n = sizeof(arr)/sizeof(int);
      cout<<"Max profit is := "<<maxProf(arr,n)<<endl;
    return 0;
}