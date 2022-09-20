#include<iostream>
using namespace std;
//searching in a sorted rotated array ususing an efficient approach
int sortRot(int arr[],int size,int x){
    int low=0;
    int high = size-1;
    while(low<=high)
    {   int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[low]<arr[mid]){
            if(arr[mid]>x && arr[low]<=x){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        else{
if(arr[mid]<x && arr[high]<=x){
    low = mid+1;
}
else{
    high = mid-1;
}

        }
      
    }
   return -1;  
}

int main(){
    int arr[]={10,20,40,60,5,8};
    int size = sizeof(arr)/sizeof(int);

 cout<<sortRot(arr,size,5);
    return 0;
}