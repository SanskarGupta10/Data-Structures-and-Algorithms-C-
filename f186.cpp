//maximum length bitonic subsequene
//bitonic means it contains the subsequence which increases first to a certain element of an array and then it starts decreasing
#include<bits/stdc++.h>
using namespace std;


int mlbs(int arr[],int n){
    //longest decreasing subsequence array
    int lds[n];
    //in such a case we have to find the increasing subsequence from the back side so we will reverse the given array. 
    // and find the lis
    // and then we will again reverse the lds array.
    reverse(arr,arr+n);
    lds[0]=1;
    for(int i=1;i<n;i++){
    lds[i]=1;
    for(int j=0;j<i;j++){
        if(arr[j]<arr[i]){
            lds[i] = max(lds[i],1+lds[j]);
        }
    }
}
reverse(lds,lds+n);
//longest increasing subsequence array
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
int res = lds[0]+lis[0]-1;
for(int i=1;i<n;i++){
    res = max(res,lds[i]+lis[i]-1);
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
    cout<<"The value of max length bitonic subsequence is := "<<mlbs(arr,n)<<endl;
    return 0;
}