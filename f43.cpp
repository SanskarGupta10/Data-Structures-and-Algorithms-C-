#include<iostream>
using namespace std;

//index of last occurence
int lastOcc(int arr[],int n,int x){
for(int i=n-1;i>=0;i--){
    if(arr[i]==x){
        return i;
    }
}

return -1;
}
//index of first occurence
int firstOcc(int arr[],int n,int x){
for(int i=0;i<n;i++){
    if(arr[i]==x){
        return i;
    }
}
return -1;
}
//Counting occurence in the sorted array
int countOcc(int arr[],int n,int x){
int first = firstOcc(arr,n,x);
int last = lastOcc(arr,n,x);
int count = last-first+1;
  return count;

}
int main(){
int arr[]={11,12,12,13,17,19,19,19,21};
int size = sizeof(arr)/sizeof(int);
cout<<"The last index of an array arr is :- "<<lastOcc(arr,size,12)<<endl;
cout<<endl;
cout<<"The total occurence of the given element is :- "<<countOcc(arr,size,21);

}