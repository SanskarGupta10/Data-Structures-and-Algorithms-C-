#include<iostream>
using namespace std;
//if all the elements present in an array are positive then the sum will be sum of all  the elements of an array
//maximum sum subarray
int  maxSumsub(int arr[],int n){
int res = arr[0];


for(int i=0;i<n;i++){
    int sum =0;
    for(int j=i;j<n;j++){
   sum = sum + arr[j];
   res = max(res,sum);
    }
}
return res;
}                                                        
int main(){
int arr[]={2,3,7,2,3};
int n = sizeof(arr)/sizeof(int);
cout<<"Max sum of the subarray present is :- "<<maxSumsub(arr,n)<<endl;

    return 0;
}