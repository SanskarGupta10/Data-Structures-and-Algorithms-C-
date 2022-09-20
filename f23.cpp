//subset sum problem
#include<iostream>
#include<algorithm>
using namespace std;
 
int sumSub(int arr[],int sum,int n){
    //where n denotes the size of an array
    if(n==0){
        return (sum==0)? 1:0;
    }

    return sumSub(arr,sum,n-1) + sumSub(arr,sum-arr[n-1],n-1);
}


int main(){
   int arr[]={10,15,20,25};
   int sum = 45;
   int size = sizeof(arr)/sizeof(int);
   cout<<"Total subsets having elements which have the given sum "<<sum<<" is "<<sumSub(arr,sum,size)<<endl;
    return 0;
}