#include<iostream>
using namespace std;

//cycle sort algorithm for lowest memory writes
void cycleSort(int arr[],int n){
for(int cs=0;cs<n-1;cs++){
    int pos = cs;
    int item = arr[cs];
    for(int i = cs+1;i<n;i++){
        if(arr[i]<item){
            pos++;
        }
    }
   
     swap(item,arr[pos]);
     while(pos != cs){
        pos = cs;
        for(int i= cs+1;i<n;i++){
            if(arr[i]<item){
                pos++;
            }

        }

        swap(item,arr[pos]);
     }
}
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
  }
}
int main(){
   int arr[]={20,40,50,10,30};
   int n = sizeof(arr)/sizeof(int);
   cycleSort(arr,n);

    return 0;
}