#include<iostream>
#include<algorithm>
using namespace std;
//sort an array with 3 types of elements 
void sort3(int arr[],int l,int h,int n){
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<l){
        temp[j]=arr[i];
        j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=l && arr[i]<h){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=h){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
}
int main(){
    int l,h;
    cout<<"Enter the value of l and h?"<<endl;
    cin>>l;
    cin>>h;
    int arr[]={10,5,6,3,20,9,40};
    int n = sizeof(arr)/sizeof(int);
    int ar[]={0,1,0,2,1,2};
    int m = sizeof(ar)/sizeof(int);
    sort(ar,ar+m);
    for(int i=0;i<m;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    sort3(arr,l,h,n);

    return 0;
}