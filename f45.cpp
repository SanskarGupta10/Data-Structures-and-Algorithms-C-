#include<iostream>
using namespace std;

//finding a peak element in an array
void peakEle(int arr[],int size){
    if(arr[0]>arr[1]){
        cout<<arr[0]<<endl;
    }
    if(arr[size-1]>arr[size-2]){
        cout<<arr[size-1]<<endl;
    }
    
for(int i=1;i<size-1;i++){
    
    if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        cout<<arr[i]<<endl;
    }
}

}
int main(){
   int arr[]={60,70,90,110,67,89,75};
    int size = sizeof(arr)/sizeof(int);
    peakEle(arr,size);
    return 0;
}