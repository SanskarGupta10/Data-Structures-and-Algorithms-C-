#include<iostream>
using namespace std;


int palindrome(int arr[],int size){
   int ar[size];
   int ar2[size];
   int temp;
   int check =0;
   for(int i=0;i<size;i++){
    ar2[i] = arr[i];
   }
   //now reversing an array
   for(int i =0;i<size/2;i++){
    //swapping
    temp = arr[i];
    arr[i]= arr[size-i-1];
    arr[size-i-1] = temp;
   }

   for(int i=0;i<size;i++){
    ar[i] = arr[i];
   }
   
   //check for the palindrome
   for(int i =0;i<size;i++){
    if(ar[i]==ar2[i]){
        check = 1;
    }
    else{
        check = 0;
        break;
    }

   }
  return check;
}
int main(){

int arr[]={1,2,4,4,2,1};
//to check for a palindrome we have
int yes = palindrome(arr,6);
if(yes == 1){
    cout<<"Its a palindrome!"<<endl;
}
else{
    cout<<"Its not a palindrome!"<<endl;
}



}