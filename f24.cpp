#include<iostream>
#include<algorithm>
using namespace std;
//searching in an unsorted array
int searchEle(int arr[],int n,int value){
    int check =0;
for(int i=0;i<n;i++){
if(arr[i]==value){
    check = 1;
    break;
}
else{
    check =0;
}
 
}
return check;
}
//using bool data type
bool searELe(int arr[],int n,int value){
  for(int i=0;i<n;i++){
    if(arr[i]==value){
        return true;
        break;
    }
    else{
        return false;
    }
  }

}


int main(){
     int arr[]={23,34,55,67,87,91};
     int size = sizeof(arr)/sizeof(int);
     if(searchEle(arr,size,66)){
        cout<<"This element is present in array !"<<endl;
     }
     else{
        cout<<"This element is not present in an array !"<<endl;
     }
    return 0;
}