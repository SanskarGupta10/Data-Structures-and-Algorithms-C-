#include<iostream>
using namespace std;
//iterative approach to check for palindrome

int isPalin(char arr[],int size){
int count = 0;
int j = size-1;
int i =0;
while(i<size && j>=0){
    if(arr[i]==arr[j]){
        count = 1;
       i++;
       j--;
    }
    else{
        count =0;
        break;
    }
}
  return count;
}
//recursive approach
void recPalin(char arr[],int size,int i,int j){
    int count =0;
    //initialize i with 0 and j with size-1
    if(j<0){
        return;
    }
    if(i==size){
        return;
    }
    if(arr[i]==arr[j]){
        
         recPalin(arr,size,i+1,j-1);
        count =1;
         return;
         
         
    }
    else{
        count =0;
        return;
        
    }
    if(count ==1){
        cout<<"Palindrome !"<<endl;
    }
    else{
        cout<<"Not a Palindrome !"<<endl;
    }
  
}
//prac
bool recPalin1(char arr[],int size,int i,int j){
    //initialize i with 0 and j with size-1
   if(i>=j){
    return true;
   }
   else{

    return ((arr[i]==arr[j]) && recPalin1(arr,size,i+1,j-1));
   }

}

int main(){
    char arr[] = "abcdcba";
   int size = sizeof(arr)/sizeof(char);
if(isPalin(arr,size-1)){
    cout<<"It is palindrome !"<<endl;
}
else{
    cout<<"Its not a palindrome!"<<endl;
}
//using recursive function
if(recPalin1(arr,size-1,0,size-2)){
    cout<<"It's a Palindrome!"<<endl;
}
else{
    cout<<"It's not a Palindrome!"<<endl;
}


    return 0;
}