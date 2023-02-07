//k closest elements without heap
#include<bits/stdc++.h>
using namespace std;

void kClos(int arr[],int n,int x,int k){
    int * ar = new int[n];
    for(int i=0;i<n;i++){
          ar[i] = abs(arr[i]-x);
    }
    sort(ar,ar+n);
    for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(ar[i]+x == arr[j]){
                    cout<<ar[i]+x<<" ";
                    break;
                }
                else if(-ar[i]+x == arr[j]){
                    cout<<-ar[i]+x<<" ";
                    break;
                }
            }
    }
    
}

int main(){
 int arr[] = {100,80,10,5,70};
 int n = sizeof(arr)/sizeof(int);
  kClos(arr,n,2,3);
    return 0;
}