//removing duplicate element from the sorted array
#include<iostream>
using namespace std;
//deleting an element in an sorted array
void remDuplicate(int arr[],int n){
    int res = 1;
    int temp[n];
    temp[0]=arr[0];
    for(int i=1;i<n;i++){
        if(temp[res-1] != arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    //printing the element
    for(int i=0;i<res;i++){
        cout<<arr[i]<<endl;
    }
}
//in case of an unsorted array
void remove(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k =i;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
 int arr[]={12,13,87,9,5,12,12,13};
 int size = sizeof(arr)/sizeof(int);
 remove(arr,size);
 
    return 0;
}