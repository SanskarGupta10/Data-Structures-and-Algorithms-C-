//longest increasing subsequence self made approach
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
    cout<<"value of lis is := "<<lis(arr,n)<<endl;
    return 0;
}