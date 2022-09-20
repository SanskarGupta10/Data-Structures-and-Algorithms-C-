#include<iostream>
using namespace std;
//naiive approach to find the elements more than n/k occurence
void selectSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
       int min_index = i;
       for(int j=i+1;j<n;j++){
        if(arr[min_index]>arr[j]){
            min_index = j;
        }
       }
       temp = arr[i];
       arr[i]=arr[min_index];
       arr[min_index]=temp;
    }
   
}
void printel(int arr[],int n,int k){
    selectSort(arr,n);
  for(int i=0;i<n-1;i++){
    int count =1;
    for(int j=i+1;j<n;j++){
     if(arr[i]==arr[j]){
          count++;
     }
    }
    if(count > (n/k)){
        cout<<arr[i]<<endl;
    }
  }

} 

int main(){
   int arr[]={30,10,20,30,30,40,30};
   int n= sizeof(arr)/sizeof(int);
   printel(arr,n,2);
    return 0;
}