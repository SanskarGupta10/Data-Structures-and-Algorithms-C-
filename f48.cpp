#include<iostream>
using namespace std;
//repeating elements in the array in which all elements occurs only 1 except one element
void repEle(int arr[],int n){
//firstly sort the array using bubble sort
   for(int i=0;i<n-1;i++){
         for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);

            }
         }
   }
   //finding the element
   for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        cout<<"Repeating element is :- "<<arr[i]<<endl;
        break;
    }
   }

}
int main(){
 int arr[]={1,2,3,4,4,4,5,6};
 int n = sizeof(arr)/sizeof(int);
 repEle(arr,n);
    return 0;
}