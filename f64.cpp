#include<iostream>
using namespace std;
//longest subarray with equal no. of zeroes and ones means binary array
int arrlen(int arr[],int n){
    int res=0;
for(int i=0;i<n;i++){
int count1 = 0;
int count2 = 0;
    for(int j=i;j<n;j++){
     if(arr[j]==0){
        count1++;
     }
     if(arr[j]==1){
        count2++;
     }
     if(count1==count2){
      res = max(res, 2*count1);
     }
    }
}
return res;
}
int main(){
    int arr[]={0,0,1,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Length of subarray containing equal 0's and 1's is :- "<<arrlen(arr,n)<<endl;

    return 0;
}