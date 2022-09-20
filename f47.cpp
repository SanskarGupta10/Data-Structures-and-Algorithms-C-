#include<iostream>
using namespace std;
//finding index of  majority elements
int majIndex(int arr[],int size){
    int count =1;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
     count++;
        }
   
   
    }
     if(count> (size/2)){
        return i;
    }
    
}
return -1;
}

int main(){
 int arr[]={1,2,3,3,3,3,3,6,7,9,8,21,45,6,5};
 int size = sizeof(arr)/sizeof(int);
 cout<<"Index of the majority element :- "<<majIndex(arr,size)<<endl;

    return 0;
}