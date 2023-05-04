//variations of longest increasing subsequence
#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n){
int lis[n];
lis[0] = 1;
for(int i=1;i<n;i++){
    lis[i]=1;
    for(int j=0;j<i;j++){
        if(arr[j]<arr[i]){
            lis[i] = max(lis[i],1+lis[j]);
        }
    }
}
int res = lis[0];
for(int i=1;i<n;i++){
    res = max(res,lis[i]);
}
return res;
}
//min deletions to make the sorted array
int minDel(int arr[],int n){
   return n - lis(arr,n);
}
//max sum increasing subsequence
int sis(int arr[],int n){
    int sip[n];
    sip[0] = arr[0];
    for(int i=1;i<n;i++){
        sip[i] = arr[i];
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                sip[i] = max(sip[i],arr[i]+sip[j]);
            }
        }
    }
    int res = sip[0];
    for(int i=1;i<n;i++){
       res = max(res,sip[i]);
    }
    return res;
}
int main(){
int n;
    cout<<"Enter the value of n ?"<<endl;
    cin>>n;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        int value;
        cout<<"Enter value ?"<<endl;
        cin>>arr[i];
    }
    cout<<"value of max sum increasing subsequence is := "<<sis(arr,n)<<endl;
    cout<<"min deletions to sort the given array is := "<<minDel(arr,n)<<endl;
    return 0;
}