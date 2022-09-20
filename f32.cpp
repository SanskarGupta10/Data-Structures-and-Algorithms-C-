#include<iostream>
using namespace std;
//frequency in a sorted array
void freqEl(int arr[],int n){
    int freq = 1;
    int i=0;
 while(i<n){
    while(i<n && arr[i]==arr[i+1]){
        freq++;
        i++;
    }
cout<<"Freq of "<<arr[i]<<" : "<<freq<<endl;
i++;
freq = 1;
 }


}

int main(){
int arr[]={1,2,2,3,4,4,5};
int size = sizeof(arr)/sizeof(int);
freqEl(arr,size);


    return 0;
}