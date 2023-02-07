//heapify using min heap concept
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n){
int ind = 0;
while((arr[ind]>arr[2*ind + 1] || arr[ind]>arr[2*ind+2] ) && ind<=n-1){
    if(arr[2*ind+1] < arr[2*ind+2]){
        swap(arr[ind],arr[2*ind+1]);
        ind = 2*ind+1;
    }
    else if(arr[2*ind+1]>arr[2*ind+2]){
        swap(arr[ind],arr[2*ind+2]);
        ind = 2*ind + 2;
    }
}

}
void extractMin(int arr[],int n){
    swap(arr[0],arr[n-1]);
    n--;
    heapify(arr,n);
    cout<<"Elements in the order below := "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
//more operations such as decrease key , delete and building the heap
void decreaseKey(int arr[],int n,int ind,int x){
       //in this we have to swap the value of given index of the given array to the given value x
       swap(arr[ind],x);
       while(arr[(ind-1)/2]>arr[ind] && ind>=0){
           swap(arr[(ind-1)/2],arr[ind]);
           ind = (ind-1)/2;
       }
        cout<<"Elements in the order below := "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
      }
cout<<endl;
}
void deletes(int arr[],int n,int ind){
     swap(arr[ind],arr[n-1]);
     n--;
      while(arr[(ind-1)/2]>arr[ind] && ind>=0){
           swap(arr[(ind-1)/2],arr[ind]);
           ind = (ind-1)/2;
       }
        cout<<"Elements in the order below := "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
      }
cout<<endl;
     
}
int main(){
//selecting the order of elements in the heap
int c;
cout<<"Enter the capacity of the heap ? "<<endl;
cin>>c;
int arr[c];
for(int i=0;i<c;i++){
    int x;
    cout<<"Enter the element ?"<<endl;
    cin>>x;
    arr[i]=x;
}
deletes(arr,c,3);


    return 0;
}