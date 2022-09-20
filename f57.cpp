#include<iostream>
using namespace std;
//stock buy and sell problem
int maxPro(int arr[],int n){
int profit =0;
for(int i=0;i<n-1;i++){
if(arr[i]<arr[i+1]){
    profit = profit + arr[i+1]-arr[i];
}

}
return profit;
}
int main(){
int arr[]={1,5,3,1,2,8};
int n = sizeof(arr)/sizeof(int);
cout<<"The max profit from the stock is :- "<<maxPro(arr,n)<<endl;
    return 0;
}