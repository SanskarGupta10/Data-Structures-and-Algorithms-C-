//efficient solution of stock buy and sell problem in O(n)
#include<iostream>
using namespace std;

int maxProf(int arr[],int n){
    int res = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            res = res + arr[i+1]-arr[i];
        }
    }
    return res;
}

int main(){
    int arr[]={30,20,10};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The max profit is := "<<maxProf(arr,n)<<endl;

    return 0;
}