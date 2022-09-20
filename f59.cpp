//tapping rain water problem
#include<iostream>
using namespace std;

void insert(int element,bool arr[],int size){
//to initiate all the elements of the boolean array with 0
     if(element<size){
      arr[element]=1;
      //insertion an element in O(1) time
     }
     
}

bool search(int e,bool arr[],int size){
if(arr[e]==1){
  return true;
}
return false;
}

void del(int e,bool arr[],int size){
if(e<size && arr[e]==1){
      arr[e]=0;
      //deletion an element in O(1) time
     }
}
int main(){
  //to initiate all the elements of the boolean array with 0
  bool arr[1000]={0};
  insert(10,arr,1000);
  insert(23,arr,1000);
  insert(45,arr,1000);
  insert(19,arr,1000);
  del(23,arr,1000);
  cout<<search(23,arr,1000)<<endl;



    return 0;
}