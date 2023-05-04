#include<bits/stdc++.h>
using namespace std;

long int sum(int arr[],int n){
    long int ans = 0;
    for(int i = 1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
              for(int count =j;count<j+i;count++){
                ans = ans + arr[count];
                cout<<arr[count]<<" ";
              }
              cout<<endl;
        }
        cout<<endl<<endl;
    }
   return ans;
}


int main(){
   int arr[] = {4,5,6};
   int n = sizeof(arr)/sizeof(int);
   cout<<sum(arr,n)<<endl;

    return 0;
}