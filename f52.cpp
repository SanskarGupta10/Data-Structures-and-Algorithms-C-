#include<iostream>
using namespace std;

//max length even odd subarray
int maxSub(int arr[],int n){
    int count =1;
    int temp =0;
for(int i=0;i<n;i++)
{if(arr[i]%2==0 && arr[i+1]%2 !=0){
      count++;
}
if(arr[i]%2 !=0 && arr[i+1]%2 ==0){
      count++;
}

if((arr[i]%2==0 && arr[i+1]%2==0) ||(arr[i]%2!=0 && arr[i+1]%2!=0) || (i==n-1) ){
      if(count>temp){
        temp = count;
      }
      count =0;
}
}
if(temp==1){
    temp =0;
}
return temp;
}
int main(){
    int arr[]={1,3,5,7,9,11,13};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The max length of even odd subarray is :- "<<maxSub(arr,n)<<endl;
    return 0;
}