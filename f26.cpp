//using efficienyt method to find whether the array is sorted or not
#include<iostream>
#include<algorithm>
using namespace std;

bool isSorted(int arr[],int n){
for(int i=1;i<n;i++){
if(arr[i] < arr[i-1]){
    return false;
    
}
}
return true;
}
int main(){
int arr[]={12,14,16,19,65,99};
int size = sizeof(arr)/sizeof(int);
if(isSorted(arr,size)){
    cout<<"Array is Sorted!"<<endl;
}
else{
    cout<<"Array is not Sorted!"<<endl;
}
}